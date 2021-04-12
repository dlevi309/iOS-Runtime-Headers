/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <libobjc.A.dylib/TSAssetHandleType.h>

@class NSString, UIImage;

@interface TeaUI.ImageAssetHandle : NSObject <TSAssetHandleType> {

	 fallbackImage;
	 uniqueKey;

}

@property (readonly,nonatomic) NSString * filePath; 
@property (retain,nonatomic) UIImage * fallbackImage; 
@property (copy,nonatomic) NSString * uniqueKey; 
-(NSString *)uniqueKey;
-(NSString *)filePath;
-(id)init;
-(UIImage *)fallbackImage;
-(void)downloadWithGroup:(id)arg1 ;
-(void)setFallbackImage:(UIImage *)arg1 ;
-(void)setUniqueKey:(NSString *)arg1 ;
@end


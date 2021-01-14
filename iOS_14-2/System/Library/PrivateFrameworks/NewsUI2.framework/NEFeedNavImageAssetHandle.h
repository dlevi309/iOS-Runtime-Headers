/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <libobjc.A.dylib/TSAssetHandleType.h>

@class NSString, UIImage;

@interface NEFeedNavImageAssetHandle : NSObject <TSAssetHandleType> {

	 filePath;
	 fallbackImage;
	 uniqueKey;
	 feedNavImageSize;
	 tag;
	 feedNavImageStyler;

}

@property (copy,nonatomic) NSString * filePath; 
@property (retain,nonatomic) UIImage * fallbackImage; 
@property (readonly,nonatomic) NSString * uniqueKey; 
-(NSString *)uniqueKey;
-(NSString *)filePath;
-(id)init;
-(UIImage *)fallbackImage;
-(void)downloadWithGroup:(id)arg1 ;
-(void)setFallbackImage:(UIImage *)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 feedNavImage:(id)arg2 feedNavImageSize:(CGSize)arg3 feedNavImageStyler:(id)arg4 ;
-(id)initWithTag:(id)arg1 feedNavImageSize:(CGSize)arg2 feedNavImageStyler:(id)arg3 ;
@end


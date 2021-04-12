/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(NSString *)uniqueKey;
-(UIImage *)fallbackImage;
-(void)setFallbackImage:(UIImage *)arg1 ;
-(void)downloadWithGroup:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 feedNavImage:(id)arg2 feedNavImageSize:(CGSize)arg3 feedNavImageStyler:(id)arg4 ;
-(id)initWithTag:(id)arg1 feedNavImageSize:(CGSize)arg2 feedNavImageStyler:(id)arg3 ;
@end


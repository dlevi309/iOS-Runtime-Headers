/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NEFeedNavImageProcessorRequest : NSObject <TSProcessedImageRequestType> {

	 assetHandles;
	 feedNavImageSize;
	 scale;
	 cornerRadius;

}

@property (copy,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(id)init;
-(NSString *)cacheIdentifier;
-(NSDictionary *)assetHandles;
-(void)setAssetHandles:(NSDictionary *)arg1 ;
-(id)initWithFeedNavImageAssetHandle:(id)arg1 feedNavImageSize:(CGSize)arg2 feedNavImageStyler:(id)arg3 scale:(double)arg4 ;
@end


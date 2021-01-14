/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAssetHandles:(NSDictionary *)arg1 ;
-(NSDictionary *)assetHandles;
-(NSString *)cacheIdentifier;
-(id)initWithFeedNavImageAssetHandle:(id)arg1 feedNavImageSize:(CGSize)arg2 feedNavImageStyler:(id)arg3 scale:(double)arg4 ;
@end


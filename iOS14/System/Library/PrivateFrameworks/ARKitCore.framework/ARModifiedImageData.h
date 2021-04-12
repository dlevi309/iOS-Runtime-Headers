/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARImageData.h>

@class ARImageData, NSDictionary;

@interface ARModifiedImageData : ARImageData {

	ARImageData* _originalImage;
	NSDictionary* _metaData;

}

@property (nonatomic,readonly) ARImageData * originalImage; 
@property (nonatomic,copy) NSDictionary * metaData;                      //@synthesize metaData=_metaData - In the implementation block
-(ARImageData *)originalImage;
-(void)setMetaData:(NSDictionary *)arg1 ;
-(id)initWithImageData:(id)arg1 ;
-(NSDictionary *)metaData;
@end


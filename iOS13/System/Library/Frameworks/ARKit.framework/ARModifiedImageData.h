/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARImageData.h>

@class ARImageData, NSDictionary;

@interface ARModifiedImageData : ARImageData {

	ARImageData* _originalImage;
	NSDictionary* _metaData;

}

@property (nonatomic,readonly) ARImageData * originalImage; 
@property (nonatomic,copy) NSDictionary * metaData;                      //@synthesize metaData=_metaData - In the implementation block
-(id)initWithImageData:(id)arg1 ;
-(NSDictionary *)metaData;
-(void)setMetaData:(NSDictionary *)arg1 ;
-(ARImageData *)originalImage;
@end


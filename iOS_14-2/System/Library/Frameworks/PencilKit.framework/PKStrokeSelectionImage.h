/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, PKStrokeSelectionImageConfig;

@interface PKStrokeSelectionImage : NSObject <NSCopying> {

	UIImage* _image;
	PKStrokeSelectionImageConfig* _config;
	PKStrokeSelectionImageConfig* _fullSizeConfig;

}

@property (nonatomic,copy) UIImage * image;                                                //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) PKStrokeSelectionImageConfig * config;                      //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) PKStrokeSelectionImageConfig * fullSizeConfig;              //@synthesize fullSizeConfig=_fullSizeConfig - In the implementation block
-(PKStrokeSelectionImageConfig *)config;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PKStrokeSelectionImageConfig *)fullSizeConfig;
-(id)initWithImage:(id)arg1 config:(id)arg2 fullSizeConfig:(id)arg3 ;
@end


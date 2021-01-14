/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout;

@interface VUIProductInfoAiringLayout : TVViewLayout {

	VUITextLayout* _infoTextLayout;
	TVImageLayout* _logoImageLayout;

}

@property (nonatomic,readonly) VUITextLayout * infoTextLayout;               //@synthesize infoTextLayout=_infoTextLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * logoImageLayout;              //@synthesize logoImageLayout=_logoImageLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(TVImageLayout *)logoImageLayout;
-(VUITextLayout *)infoTextLayout;
@end


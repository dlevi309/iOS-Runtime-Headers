/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

@interface VUICastInfoLayout : TVViewLayout {

	VUITextLayout* _headerTextLayout;
	VUITextLayout* _textLayout;

}

@property (nonatomic,readonly) VUITextLayout * headerTextLayout;              //@synthesize headerTextLayout=_headerTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * textLayout;                    //@synthesize textLayout=_textLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(VUITextLayout *)textLayout;
-(VUITextLayout *)headerTextLayout;
@end


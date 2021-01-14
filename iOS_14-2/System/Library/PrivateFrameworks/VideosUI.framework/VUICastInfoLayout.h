/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


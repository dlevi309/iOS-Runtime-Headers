/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

@interface VUIErrorLayout : TVViewLayout {

	VUITextLayout* _titleTextLayout;
	VUITextLayout* _descriptionTextLayout;
	VUITextLayout* _debugTextLayout;
	VUITextLayout* _debugTextLayout2;

}

@property (nonatomic,readonly) VUITextLayout * titleTextLayout;                    //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTextLayout;              //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * debugTextLayout;                    //@synthesize debugTextLayout=_debugTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * debugTextLayout2;                   //@synthesize debugTextLayout2=_debugTextLayout2 - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)descriptionTextLayout;
-(VUITextLayout *)debugTextLayout;
-(VUITextLayout *)debugTextLayout2;
@end


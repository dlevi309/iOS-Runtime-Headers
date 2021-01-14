/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) VUITextLayout * titleTextLayout;                    //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * descriptionTextLayout;              //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * debugTextLayout;                    //@synthesize debugTextLayout=_debugTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * debugTextLayout2;                   //@synthesize debugTextLayout2=_debugTextLayout2 - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)descriptionTextLayout;
-(VUITextLayout *)debugTextLayout;
-(VUITextLayout *)debugTextLayout2;
-(void)setTitleTextLayout:(VUITextLayout *)arg1 ;
-(void)setDescriptionTextLayout:(VUITextLayout *)arg1 ;
-(void)setDebugTextLayout:(VUITextLayout *)arg1 ;
-(void)setDebugTextLayout2:(VUITextLayout *)arg1 ;
@end


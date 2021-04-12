/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFAlertButton.h>

@class NSString, WFImage;

@interface WFSelectableAlertButton : WFAlertButton {

	BOOL _selected;
	BOOL _stickySelection;
	NSString* _subtitle;
	WFImage* _image;

}

@property (nonatomic,copy,readonly) NSString * subtitle;                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) WFImage * image;                       //@synthesize image=_image - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) BOOL stickySelection;                       //@synthesize stickySelection=_stickySelection - In the implementation block
+(id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 selected:(BOOL)arg3 style:(long long)arg4 handler:(/*^block*/id)arg5 ;
+(id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 selected:(BOOL)arg3 stickySelection:(BOOL)arg4 style:(long long)arg5 handler:(/*^block*/id)arg6 image:(id)arg7 ;
-(WFImage *)image;
-(NSString *)subtitle;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)stickySelection;
@end


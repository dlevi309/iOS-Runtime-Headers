/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@class UIView, IKViewElement, NSString;

@interface VUIBadgeViewWrapper : NSObject {

	UIView* _badgeView;
	IKViewElement* _badgeElement;
	NSString* _badgeType;
	CGSize _badgeSize;
	CGRect _badgeFrame;

}

@property (nonatomic,retain) UIView * badgeView;                        //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) IKViewElement * badgeElement;              //@synthesize badgeElement=_badgeElement - In the implementation block
@property (assign,nonatomic) CGSize badgeSize;                          //@synthesize badgeSize=_badgeSize - In the implementation block
@property (assign,nonatomic) CGRect badgeFrame;                         //@synthesize badgeFrame=_badgeFrame - In the implementation block
@property (nonatomic,retain) NSString * badgeType;                      //@synthesize badgeType=_badgeType - In the implementation block
-(CGSize)badgeSize;
-(UIView *)badgeView;
-(void)setBadgeView:(UIView *)arg1 ;
-(NSString *)badgeType;
-(void)setBadgeType:(NSString *)arg1 ;
-(CGRect)badgeFrame;
-(void)setBadgeSize:(CGSize)arg1 ;
-(IKViewElement *)badgeElement;
-(void)setBadgeElement:(IKViewElement *)arg1 ;
-(void)setBadgeFrame:(CGRect)arg1 ;
@end


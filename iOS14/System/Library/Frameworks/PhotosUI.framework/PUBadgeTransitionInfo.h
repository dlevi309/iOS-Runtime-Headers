/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class UIView;

@interface PUBadgeTransitionInfo : NSObject {

	UIView* _snapshotView;
	unsigned long long _badgesCorner;
	UIOffset _badgesOffset;
	CGRect _frame;

}

@property (nonatomic,retain) UIView * snapshotView;                        //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) UIOffset badgesOffset;                        //@synthesize badgesOffset=_badgesOffset - In the implementation block
@property (assign,nonatomic) unsigned long long badgesCorner;              //@synthesize badgesCorner=_badgesCorner - In the implementation block
@property (assign,nonatomic) CGRect frame;                                 //@synthesize frame=_frame - In the implementation block
-(UIView *)snapshotView;
-(CGRect)frame;
-(void)setSnapshotView:(UIView *)arg1 ;
-(void)setBadgesOffset:(UIOffset)arg1 ;
-(void)setBadgesCorner:(unsigned long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIOffset)badgesOffset;
-(unsigned long long)badgesCorner;
@end


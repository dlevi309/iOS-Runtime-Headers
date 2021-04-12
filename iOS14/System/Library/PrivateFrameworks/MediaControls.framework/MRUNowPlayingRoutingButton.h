/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <MediaPlayer/MPButton.h>

@class CCUICAPackageView;

@interface MRUNowPlayingRoutingButton : MPButton {

	BOOL _active;
	long long _deviceType;
	long long _context;
	CCUICAPackageView* _packageView;

}

@property (nonatomic,retain) CCUICAPackageView * packageView;              //@synthesize packageView=_packageView - In the implementation block
@property (assign,nonatomic) long long deviceType;                         //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                  //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) long long context;                            //@synthesize context=_context - In the implementation block
+(BOOL)_cursorInteractionEnabled;
-(long long)deviceType;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPackageView:(CCUICAPackageView *)arg1 ;
-(CCUICAPackageView *)packageView;
-(void)setDeviceType:(long long)arg1 ;
-(BOOL)isActive;
-(long long)context;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setContext:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updatePackage;
-(void)updatePackageState;
@end


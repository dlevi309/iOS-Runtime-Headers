/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class HFItem, NSSet, HUQuickControlPresentationItemManager, HMHome, UIViewController;

@interface HUQuickControlPresentationContext : NSObject <NSCopying> {

	BOOL _didAuthenticate;
	BOOL _prefersSystemTransitions;
	BOOL _shouldIncludeRoomNameInHeaderTitle;
	unsigned long long _colorStyle;
	HFItem*<NSCopying> _item;
	NSSet* _controlItems;
	HUQuickControlPresentationItemManager* _itemManager;
	HMHome* _home;
	UIViewController* _sourceViewController;
	CGRect _sourceRect;

}

@property (assign,nonatomic) unsigned long long colorStyle;                                    //@synthesize colorStyle=_colorStyle - In the implementation block
@property (nonatomic,retain) HFItem*<NSCopying> item;                                          //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSSet * controlItems;                                               //@synthesize controlItems=_controlItems - In the implementation block
@property (nonatomic,retain) HUQuickControlPresentationItemManager * itemManager;              //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                    //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * sourceViewController;                   //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (assign,nonatomic) BOOL didAuthenticate;                                             //@synthesize didAuthenticate=_didAuthenticate - In the implementation block
@property (assign,nonatomic) BOOL prefersSystemTransitions;                                    //@synthesize prefersSystemTransitions=_prefersSystemTransitions - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeRoomNameInHeaderTitle;                          //@synthesize shouldIncludeRoomNameInHeaderTitle=_shouldIncludeRoomNameInHeaderTitle - In the implementation block
-(HFItem*<NSCopying>)item;
-(void)setItem:(HFItem*<NSCopying>)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)setDidAuthenticate:(BOOL)arg1 ;
-(void)setControlItems:(NSSet *)arg1 ;
-(HUQuickControlPresentationItemManager *)itemManager;
-(CGRect)sourceRect;
-(NSSet *)controlItems;
-(void)setSourceViewController:(UIViewController *)arg1 ;
-(void)setItemManager:(HUQuickControlPresentationItemManager *)arg1 ;
-(UIViewController *)sourceViewController;
-(void)setHome:(HMHome *)arg1 ;
-(BOOL)didAuthenticate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(void)setColorStyle:(unsigned long long)arg1 ;
-(void)setPrefersSystemTransitions:(BOOL)arg1 ;
-(void)setShouldIncludeRoomNameInHeaderTitle:(BOOL)arg1 ;
-(BOOL)shouldIncludeRoomNameInHeaderTitle;
-(unsigned long long)colorStyle;
-(BOOL)prefersSystemTransitions;
@end


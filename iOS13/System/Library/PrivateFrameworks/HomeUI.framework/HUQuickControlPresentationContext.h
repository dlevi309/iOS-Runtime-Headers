/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class HFItem, NSSet, HMHome, UIViewController;

@interface HUQuickControlPresentationContext : NSObject <NSCopying> {

	unsigned long long _colorStyle;
	HFItem*<NSCopying> _item;
	NSSet* _controlItems;
	HMHome* _home;
	UIViewController* _sourceViewController;
	CGRect _sourceRect;

}

@property (assign,nonatomic) unsigned long long colorStyle;                               //@synthesize colorStyle=_colorStyle - In the implementation block
@property (nonatomic,retain) HFItem*<NSCopying> item;                                     //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSSet * controlItems;                                          //@synthesize controlItems=_controlItems - In the implementation block
@property (nonatomic,retain) HMHome * home;                                               //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                           //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * sourceViewController;              //@synthesize sourceViewController=_sourceViewController - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(HFItem*<NSCopying>)item;
-(void)setItem:(HFItem*<NSCopying>)arg1 ;
-(HMHome *)home;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(UIViewController *)sourceViewController;
-(void)setHome:(HMHome *)arg1 ;
-(void)setSourceViewController:(UIViewController *)arg1 ;
-(NSSet *)controlItems;
-(void)setColorStyle:(unsigned long long)arg1 ;
-(void)setControlItems:(NSSet *)arg1 ;
-(unsigned long long)colorStyle;
@end


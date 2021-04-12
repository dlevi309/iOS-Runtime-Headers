/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStyledButton.h>
#import <libobjc.A.dylib/SKUIToggleItemStateCenterObserver.h>

@protocol SKUIToggleButtonDelegate;
@class SKUIButtonViewElement, NSString, SKUIAttributedStringLayout;

@interface SKUIToggleButton : SKUIStyledButton <SKUIToggleItemStateCenterObserver> {

	BOOL _autoIncrement;
	long long _autoIncrementCount;
	long long _count;
	SKUIButtonViewElement* _element;
	id<SKUIToggleButtonDelegate> _delegate;
	NSString* _itemIdentifier;
	SKUIAttributedStringLayout* _nonToggledLayout;
	NSString* _titleToggleString;
	SKUIAttributedStringLayout* _toggledLayout;
	BOOL _toggled;
	NSString* _toggleItemIdentifier;
	NSString* _nonToggledTitle;
	NSString* _toggledTitle;
	id _nonToggledContents;
	id _toggledContents;
	long long _toggleButtonType;

}

@property (assign,nonatomic) long long autoIncrementCount;                              //@synthesize autoIncrementCount=_autoIncrementCount - In the implementation block
@property (assign,nonatomic) long long count;                                           //@synthesize count=_count - In the implementation block
@property (assign,nonatomic,__weak) SKUIButtonViewElement * element;                    //@synthesize element=_element - In the implementation block
@property (nonatomic,retain) NSString * toggleItemIdentifier;                           //@synthesize toggleItemIdentifier=_toggleItemIdentifier - In the implementation block
@property (nonatomic,retain) NSString * nonToggledTitle;                                //@synthesize nonToggledTitle=_nonToggledTitle - In the implementation block
@property (nonatomic,retain) NSString * toggledTitle;                                   //@synthesize toggledTitle=_toggledTitle - In the implementation block
@property (nonatomic,retain) id nonToggledContents;                                     //@synthesize nonToggledContents=_nonToggledContents - In the implementation block
@property (nonatomic,retain) id toggledContents;                                        //@synthesize toggledContents=_toggledContents - In the implementation block
@property (assign,nonatomic) long long toggleButtonType;                                //@synthesize toggleButtonType=_toggleButtonType - In the implementation block
@property (assign,getter=isToggled,nonatomic) BOOL toggled;                             //@synthesize toggled=_toggled - In the implementation block
@property (assign,nonatomic) BOOL autoIncrement;                                        //@synthesize autoIncrement=_autoIncrement - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIToggleButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCount:(long long)arg1 ;
-(id)init;
-(id<SKUIToggleButtonDelegate>)delegate;
-(SKUIButtonViewElement *)element;
-(void)setElement:(SKUIButtonViewElement *)arg1 ;
-(long long)count;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<SKUIToggleButtonDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setToggled:(BOOL)arg1 ;
-(BOOL)isToggled;
-(id)_titleAttributes;
-(void)dealloc;
-(NSString *)toggleItemIdentifier;
-(void)setNonToggledTitle:(NSString *)arg1 ;
-(void)setToggledTitle:(NSString *)arg1 ;
-(void)setToggleItemIdentifier:(NSString *)arg1 ;
-(void)setToggled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)autoIncrementCount;
-(void)setAutoIncrement:(BOOL)arg1 ;
-(void)setToggleButtonType:(long long)arg1 ;
-(void)setAutoIncrementCount:(long long)arg1 ;
-(void)setButtonTitleText:(id)arg1 ;
-(void)setNonToggledContents:(id)arg1 ;
-(void)setToggledContents:(id)arg1 ;
-(void)itemStateCenter:(id)arg1 itemStateChanged:(id)arg2 ;
-(id)_toggledLayout;
-(id)_nonToggledLayout;
-(void)_showToggleState:(BOOL)arg1 ;
-(id)_layoutForString:(id)arg1 ;
-(NSString *)nonToggledTitle;
-(void)_sendWillAnimate;
-(void)_sendDidAnimate;
-(id)toggledContents;
-(id)nonToggledContents;
-(NSString *)toggledTitle;
-(BOOL)autoIncrement;
-(long long)toggleButtonType;
@end


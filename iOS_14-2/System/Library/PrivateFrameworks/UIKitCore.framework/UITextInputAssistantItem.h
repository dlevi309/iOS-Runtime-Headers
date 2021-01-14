/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray, UIColor, UIBlurEffect;

@interface UITextInputAssistantItem : NSObject {

	BOOL _allowsHidingShortcuts;
	BOOL _showsBarButtonItemsInline;
	BOOL _independentGroupSizes;
	NSArray* _leadingBarButtonGroups;
	NSArray* _trailingBarButtonGroups;
	NSArray* _centerBarButtonGroups;
	double _marginOverride;
	UIColor* _detachedBackgroundColor;
	UIBlurEffect* _detachedBackgroundEffect;
	UIColor* _detachedTintColor;

}

@property (getter=_isSystemItem,nonatomic,readonly) BOOL systemItem; 
@property (getter=_hasItemsToDisplay,nonatomic,readonly) BOOL hasItemsToDisplay; 
@property (getter=_requiresPredictionDisabled,nonatomic,readonly) BOOL requiresPredictionDisabled; 
@property (assign,setter=_setShowsBarButtonItemsInline:,getter=_showsBarButtonItemsInline,nonatomic) BOOL showsBarButtonItemsInline;                   //@synthesize showsBarButtonItemsInline=_showsBarButtonItemsInline - In the implementation block
@property (setter=_setCenterBarButtonGroups:,getter=_centerBarButtonGroups,nonatomic,copy) NSArray * centerBarButtonGroups;                            //@synthesize centerBarButtonGroups=_centerBarButtonGroups - In the implementation block
@property (assign,setter=_setIndependentGroupSizes:,getter=_independentGroupSizes,nonatomic) BOOL independentGroupSizes;                               //@synthesize independentGroupSizes=_independentGroupSizes - In the implementation block
@property (assign,setter=_setMarginOverride:,getter=_marginOverride,nonatomic) double marginOverride;                                                  //@synthesize marginOverride=_marginOverride - In the implementation block
@property (setter=_setDetachedBackgroundColor:,getter=_detachedBackgroundColor,nonatomic,retain) UIColor * detachedBackgroundColor;                    //@synthesize detachedBackgroundColor=_detachedBackgroundColor - In the implementation block
@property (setter=_setDetachedBackgroundEffect:,getter=_detachedBackgroundEffect,nonatomic,copy) UIBlurEffect * detachedBackgroundEffect;              //@synthesize detachedBackgroundEffect=_detachedBackgroundEffect - In the implementation block
@property (setter=_setDetachedTintColor:,getter=_detachedTintColor,nonatomic,retain) UIColor * detachedTintColor;                                      //@synthesize detachedTintColor=_detachedTintColor - In the implementation block
@property (assign,nonatomic) BOOL allowsHidingShortcuts;                                                                                               //@synthesize allowsHidingShortcuts=_allowsHidingShortcuts - In the implementation block
@property (nonatomic,copy) NSArray * leadingBarButtonGroups;                                                                                           //@synthesize leadingBarButtonGroups=_leadingBarButtonGroups - In the implementation block
@property (nonatomic,copy) NSArray * trailingBarButtonGroups;                                                                                          //@synthesize trailingBarButtonGroups=_trailingBarButtonGroups - In the implementation block
+(id)_keyboardDeleteItem;
-(id)init;
-(BOOL)_isSystemItem;
-(id)description;
-(BOOL)allowsHidingShortcuts;
-(id)_centerBarButtonGroups;
-(id)_detachedBackgroundEffect;
-(id)_detachedTintColor;
-(id)_detachedBackgroundColor;
-(BOOL)_showsBarButtonItemsInline;
-(double)_marginOverride;
-(void)_setDetachedTintColor:(id)arg1 ;
-(BOOL)_hasItemsToDisplay;
-(void)_setMarginOverride:(double)arg1 ;
-(BOOL)_requiresPredictionDisabled;
-(void)_setCenterBarButtonGroups:(id)arg1 ;
-(void)_setIndependentGroupSizes:(BOOL)arg1 ;
-(void)setAllowsHidingShortcuts:(BOOL)arg1 ;
-(void)_setShowsBarButtonItemsInline:(BOOL)arg1 ;
-(void)_setDetachedBackgroundColor:(id)arg1 ;
-(void)_setDetachedBackgroundEffect:(id)arg1 ;
-(void)setLeadingBarButtonGroups:(NSArray *)arg1 ;
-(void)setTrailingBarButtonGroups:(NSArray *)arg1 ;
-(BOOL)_independentGroupSizes;
-(void)dealloc;
-(NSArray *)leadingBarButtonGroups;
-(NSArray *)trailingBarButtonGroups;
@end


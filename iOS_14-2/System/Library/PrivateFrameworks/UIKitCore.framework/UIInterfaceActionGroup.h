/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIInterfaceAction, NSPointerArray, NSString, UIInterfaceActionVisualStyle;

@interface UIInterfaceActionGroup : NSObject <UIInterfaceActionDisplayPropertyObserver, NSCopying> {

	NSArray* _actions;
	UIInterfaceAction* _preferredAction;
	NSPointerArray* _weakDisplayPropertyObservers;
	NSString* _title;
	NSArray* _actionsBySection;
	UIInterfaceActionVisualStyle* _visualStyle;
	CGSize _leadingImageLayoutSize;
	CGSize _trailingImageLayoutSize;

}

@property (nonatomic,readonly) NSPointerArray * weakDisplayPropertyObservers;                                                     //@synthesize weakDisplayPropertyObservers=_weakDisplayPropertyObservers - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * actionsBySection;                                                                        //@synthesize actionsBySection=_actionsBySection - In the implementation block
@property (nonatomic,readonly) CGSize leadingImageLayoutSize;                                                                     //@synthesize leadingImageLayoutSize=_leadingImageLayoutSize - In the implementation block
@property (nonatomic,readonly) CGSize trailingImageLayoutSize;                                                                    //@synthesize trailingImageLayoutSize=_trailingImageLayoutSize - In the implementation block
@property (setter=_setVisualStyle:,getter=_visualStyle,nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                                                                                 //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) UIInterfaceAction * preferredAction;                                                                 //@synthesize preferredAction=_preferredAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionGroupWithActionsBySection:(id)arg1 ;
+(id)actionGroupWithActions:(id)arg1 ;
+(BOOL)changedProperties:(id)arg1 containsAny:(id)arg2 ;
-(void)setPreferredAction:(UIInterfaceAction *)arg1 ;
-(void)_beginObservingActions;
-(void)_endObservingActions;
-(void)_performWithActionObservingDisabled:(/*^block*/id)arg1 ;
-(void)_removeActionGroupDisplayPropertyObserver:(id)arg1 ;
-(void)setTrailingImageLayoutSize:(CGSize)arg1 ;
-(NSArray *)actions;
-(id)_deepCopyOfActionsBySection;
-(CGSize)leadingImageLayoutSize;
-(id)_visualStyle;
-(void)_updateActionImageLayoutSizes;
-(NSArray *)actionsBySection;
-(void)setLeadingImageLayoutSize:(CGSize)arg1 ;
-(void)_notifyObserversDidChangeActionProperty:(id)arg1 ;
-(UIInterfaceAction *)preferredAction;
-(NSString *)description;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2 ;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(CGSize)trailingImageLayoutSize;
-(NSPointerArray *)weakDisplayPropertyObservers;
-(void)_reloadImageLayoutSizesUsingExistingActionImages;
-(void)_notifyObserversVisualStyleDidChange;
-(id)initWithTitle:(id)arg1 actionsBySection:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setVisualStyle:(id)arg1 ;
-(void)_addActionGroupDisplayPropertyObserver:(id)arg1 ;
-(NSString *)title;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, SUSegmentedControl, SUStorePageViewController, NSString, NSNumber;

@interface SUScriptSegmentedControl : SUScriptObject {

	NSArray* _segments;
	long long _style;

}

@property (nonatomic,readonly) SUSegmentedControl * activeSegmentedControl; 
@property (nonatomic,readonly) NSArray * rawSegments; 
@property (nonatomic,readonly) SUStorePageViewController * storePageViewController; 
@property (nonatomic,retain) SUSegmentedControl * nativeSegmentedControl; 
@property (nonatomic,readonly) long long nativeSelectedIndex; 
@property (copy) NSString * cancelButtonTitle; 
@property (copy) NSString * moreListTitle; 
@property (assign) long long maximumNumberOfItems; 
@property (assign) double maximumWidth; 
@property (retain) id segments; 
@property (retain) NSNumber * selectedIndex; 
@property (readonly) NSNumber * selectedSegmentIndex; 
@property (copy) id showsMoreListAutomatically; 
@property (retain) NSString * style; 
@property (copy) id tintColor; 
@property (assign) long long tintStyle; 
@property (readonly) unsigned long long controlStateDisabled; 
@property (readonly) unsigned long long controlStateHighlighted; 
@property (readonly) unsigned long long controlStateNormal; 
@property (readonly) unsigned long long controlStateSelected; 
@property (readonly) NSNumber * noSegmentIndex; 
@property (readonly) long long tintStyleDark; 
@property (readonly) long long tintStyleDefault; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(double)maximumWidth;
-(long long)tintStyle;
-(void)setMaximumWidth:(double)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)setTintStyle:(long long)arg1 ;
-(void)setMaximumNumberOfItems:(long long)arg1 ;
-(id)attributeKeys;
-(void)setSegments:(id)arg1 ;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(NSNumber *)selectedIndex;
-(id)segments;
-(NSString *)cancelButtonTitle;
-(void)setStyle:(NSString *)arg1 ;
-(id)_className;
-(long long)maximumNumberOfItems;
-(NSNumber *)selectedSegmentIndex;
-(id)tintColor;
-(NSString *)style;
-(void)dealloc;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(SUStorePageViewController *)storePageViewController;
-(id)scriptAttributeKeys;
-(NSString *)moreListTitle;
-(void)setMoreListTitle:(NSString *)arg1 ;
-(id)initWithPageSectionGroup:(id)arg1 ;
-(SUSegmentedControl *)nativeSegmentedControl;
-(id)newPageSectionGroup;
-(long long)nativeSelectedIndex;
-(void)setNativeSegmentedControl:(SUSegmentedControl *)arg1 ;
-(id)_newSegmentsFromPageSectionGroup:(id)arg1 ;
-(id)_newNativeSegmentedControl;
-(SUSegmentedControl *)activeSegmentedControl;
-(id)_newPageSectionGroupWithSegments:(id)arg1 ;
-(void)_setColor:(id)arg1 forTitleTextAttribute:(id)arg2 controlState:(unsigned long long)arg3 ;
-(void)_setRawSegments:(id)arg1 ;
-(void)_reloadViewControllerPageSectionGroup;
-(void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2 ;
-(void)setShowsMoreListAutomatically:(id)arg1 ;
-(long long)_sectionsStyleForString:(id)arg1 ;
-(id)showsMoreListAutomatically;
-(void)hideMoreListAnimated:(BOOL)arg1 ;
-(id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2 ;
-(void)setTitleColor:(id)arg1 forControlState:(unsigned long long)arg2 ;
-(void)setTitleShadowColor:(id)arg1 forControlState:(unsigned long long)arg2 ;
-(void)showMoreListAnimated:(BOOL)arg1 ;
-(void)showPopoverController:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(id)titleColorForControlState:(unsigned long long)arg1 ;
-(id)titleShadowColorForControlState:(unsigned long long)arg1 ;
-(unsigned long long)controlStateDisabled;
-(unsigned long long)controlStateHighlighted;
-(unsigned long long)controlStateNormal;
-(unsigned long long)controlStateSelected;
-(NSNumber *)noSegmentIndex;
-(long long)tintStyleDark;
-(long long)tintStyleDefault;
-(NSArray *)rawSegments;
@end


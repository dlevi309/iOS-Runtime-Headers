/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIViewConfigurationStateReadonly.h>
#import <UIKit/UIConfigurationState.h>

@class UITraitCollection, NSMutableDictionary, NSString;

@interface UIViewConfigurationState : NSObject <_UIViewConfigurationStateReadonly, UIConfigurationState> {

	unsigned long long _mutations;
	NSMutableDictionary* _customStates;
	struct {
		unsigned isDisabled : 1;
		unsigned isHighlighted : 1;
		unsigned isSelected : 1;
		unsigned isFocused : 1;
	}  _stateFlags;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) unsigned long long _mutations; 
@property (assign,setter=_setShowingCompactContextMenu:,nonatomic) BOOL _showingCompactContextMenu; 
@property (nonatomic,retain) UITraitCollection * traitCollection;                                                //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isFocused,nonatomic) BOOL focused; 
@property (nonatomic,readonly) unsigned long long _viewConfigurationState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)_mutations;
-(void)setDisabled:(BOOL)arg1 ;
-(UITraitCollection *)traitCollection;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(BOOL)isSelected;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(BOOL)isFocused;
-(NSString *)description;
-(BOOL)isHighlighted;
-(void)setFocused:(BOOL)arg1 ;
-(void)_configureWithViewConfigurationState:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithState:(id)arg1 ;
-(void)_appendPropertiesForDescription:(id)arg1 ;
-(void)setCustomState:(id)arg1 forKey:(id)arg2 ;
-(id)customStateForKey:(id)arg1 ;
-(BOOL)_showingCompactContextMenu;
-(void)_setShowingCompactContextMenu:(BOOL)arg1 ;
-(id)initWithTraitCollection:(id)arg1 ;
-(unsigned long long)_viewConfigurationState;
-(id)_customStatesForSwiftBridging;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setSwiftBridgingCustomState:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end


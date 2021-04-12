/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUAvailableRelatedTriggerItemModuleContextProviding.h>

@class NSString, NSNumber;

@interface HUAvailableRelatedTriggerItemModuleContext : NSObject <HUAvailableRelatedTriggerItemModuleContextProviding> {

	BOOL _showsIcons;
	BOOL _hidesAddAutomationItem;
	BOOL _commitsAutomatically;
	BOOL _itemsAreEditable;
	BOOL _hidesCustomTriggers;
	BOOL _showNaturalLightingItem;
	unsigned long long _errorHandlingStrategy;
	NSString* _analyticsPresentationContext;
	NSNumber* _defaultActiveValue;
	unsigned long long _engineOptions;

}

@property (assign,nonatomic) BOOL showsIcons;                                       //@synthesize showsIcons=_showsIcons - In the implementation block
@property (assign,nonatomic) BOOL hidesAddAutomationItem;                           //@synthesize hidesAddAutomationItem=_hidesAddAutomationItem - In the implementation block
@property (assign,nonatomic) BOOL commitsAutomatically;                             //@synthesize commitsAutomatically=_commitsAutomatically - In the implementation block
@property (assign,nonatomic) BOOL itemsAreEditable;                                 //@synthesize itemsAreEditable=_itemsAreEditable - In the implementation block
@property (assign,nonatomic) BOOL hidesCustomTriggers;                              //@synthesize hidesCustomTriggers=_hidesCustomTriggers - In the implementation block
@property (assign,nonatomic) unsigned long long errorHandlingStrategy;              //@synthesize errorHandlingStrategy=_errorHandlingStrategy - In the implementation block
@property (assign,nonatomic) BOOL showNaturalLightingItem;                          //@synthesize showNaturalLightingItem=_showNaturalLightingItem - In the implementation block
@property (nonatomic,retain) NSString * analyticsPresentationContext;               //@synthesize analyticsPresentationContext=_analyticsPresentationContext - In the implementation block
@property (nonatomic,retain) NSNumber * defaultActiveValue;                         //@synthesize defaultActiveValue=_defaultActiveValue - In the implementation block
@property (assign,nonatomic) unsigned long long engineOptions;                      //@synthesize engineOptions=_engineOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)engineOptions;
-(void)setEngineOptions:(unsigned long long)arg1 ;
-(BOOL)itemsAreEditable;
-(NSString *)analyticsPresentationContext;
-(BOOL)hidesCustomTriggers;
-(BOOL)hidesAddAutomationItem;
-(BOOL)showNaturalLightingItem;
-(void)setShowsIcons:(BOOL)arg1 ;
-(void)setHidesAddAutomationItem:(BOOL)arg1 ;
-(void)setCommitsAutomatically:(BOOL)arg1 ;
-(void)setItemsAreEditable:(BOOL)arg1 ;
-(void)setErrorHandlingStrategy:(unsigned long long)arg1 ;
-(void)setHidesCustomTriggers:(BOOL)arg1 ;
-(void)setAnalyticsPresentationContext:(NSString *)arg1 ;
-(void)setDefaultActiveValue:(NSNumber *)arg1 ;
-(void)setShowNaturalLightingItem:(BOOL)arg1 ;
-(BOOL)showsIcons;
-(BOOL)commitsAutomatically;
-(unsigned long long)errorHandlingStrategy;
-(NSNumber *)defaultActiveValue;
@end


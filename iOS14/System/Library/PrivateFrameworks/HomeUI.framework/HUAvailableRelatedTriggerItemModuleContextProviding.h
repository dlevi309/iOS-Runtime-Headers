/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class NSString, NSNumber;


@protocol HUAvailableRelatedTriggerItemModuleContextProviding <NSObject>
@property (nonatomic,readonly) BOOL showsIcons; 
@property (nonatomic,readonly) BOOL hidesAddAutomationItem; 
@property (nonatomic,readonly) BOOL commitsAutomatically; 
@property (nonatomic,readonly) BOOL itemsAreEditable; 
@property (nonatomic,readonly) BOOL hidesCustomTriggers; 
@property (assign,nonatomic) unsigned long long errorHandlingStrategy; 
@property (nonatomic,readonly) BOOL showNaturalLightingItem; 
@property (nonatomic,readonly) NSString * analyticsPresentationContext; 
@property (nonatomic,readonly) NSNumber * defaultActiveValue; 
@property (nonatomic,readonly) unsigned long long engineOptions; 
@required
-(unsigned long long)engineOptions;
-(BOOL)itemsAreEditable;
-(NSString *)analyticsPresentationContext;
-(BOOL)hidesCustomTriggers;
-(BOOL)hidesAddAutomationItem;
-(BOOL)showNaturalLightingItem;
-(void)setErrorHandlingStrategy:(unsigned long long)arg1;
-(BOOL)showsIcons;
-(BOOL)commitsAutomatically;
-(unsigned long long)errorHandlingStrategy;
-(NSNumber *)defaultActiveValue;

@end


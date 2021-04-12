/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

@class NSString;


@protocol APPCJourneyMetricsHelping
@property (readonly,nonatomic) NSString * promotedContentIdentifier; 
@property (readonly,nonatomic) NSString * journeyIdentifier; 
@property (readonly,nonatomic) id<APMetricPrimitiveCreating> primitiveCreator; 
@property (readonly,nonatomic) BOOL hasBeenOnScreen; 
@property (assign,__weak,nonatomic) id<APPCPromotableContent> promotedContent; 
@required
-(void)ready;
-(void)loaded;
-(NSString *)journeyIdentifier;
-(void)userReturnedFromInteraction;
-(void)adMarkerInteracted;
-(void)exceededContainer;
-(void)visibleWithPercent:(long long)arg1 starting:(id)arg2 duration:(double)arg3 scrollVelocity:(float)arg4 collapsed:(BOOL)arg5;
-(void)notConsumedWithCode:(long long)arg1 placeholder:(BOOL)arg2;
-(BOOL)hasBeenOnScreen;
-(void)replacedWithHelper:(id)arg1;
-(void)offScreenWithCollapsed:(BOOL)arg1;
-(void)onScreenWithCollapsed:(BOOL)arg1;
-(void)placedWithPlacementType:(long long)arg1 wasNativeSlot:(BOOL)arg2;
-(void)interactedAtXPos:(float)arg1 yPos:(float)arg2;
-(void)contentLoadFailure;
-(NSString *)promotedContentIdentifier;
-(id<APMetricPrimitiveCreating>)primitiveCreator;
-(id<APPCPromotableContent>)promotedContent;
-(void)setPromotedContent:(id)arg1;
-(void)delivered;
-(void)discardedWithCode:(long long)arg1;
-(void)createdWithAdType:(long long)arg1;
-(void)getAppWithButtonState:(long long)arg1 timeToPreviousInstall:(double)arg2;

@end


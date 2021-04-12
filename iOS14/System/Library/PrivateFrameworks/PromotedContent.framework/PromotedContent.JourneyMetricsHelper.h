/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <libobjc.A.dylib/APPCJourneyMetricsHelping.h>
#import <libobjc.A.dylib/APPCMetricRegister.h>

@class NSString;

@interface PromotedContent.JourneyMetricsHelper : NSObject <APPCJourneyMetricsHelping, APPCMetricRegister> {

	 promotedContent;
	 promotedContentIdentifier;
	 journeyIdentifier;
	 primitiveCreator;
	 contextIdentifier;
	 hasBeenOnScreen;
	 isCurrentlyOnScreen;
	 notificationOwner;
	 interactionThreshold;
	 interactionTime;
	 viewReady;
	 wasCreated;
	 hasBeenPlaced;
	 stop;

}

@property (assign,__weak,nonatomic) id<APPCPromotableContent> promotedContent; 
@property (copy,nonatomic) NSString * promotedContentIdentifier; 
@property (copy,nonatomic) NSString * journeyIdentifier; 
@property (retain,nonatomic) id<APMetricPrimitiveCreating> primitiveCreator; 
@property (assign,nonatomic) BOOL hasBeenOnScreen; 
-(id)isVoiceOverRunning;
-(void)ready;
-(id)init;
-(void)loaded;
-(NSString *)journeyIdentifier;
-(void)userReturnedFromInteraction;
-(void)adMarkerInteracted;
-(void)exceededContainer;
-(void)visibleWithPercent:(long long)arg1 starting:(id)arg2 duration:(double)arg3 scrollVelocity:(float)arg4 collapsed:(BOOL)arg5 ;
-(void)notConsumedWithCode:(long long)arg1 placeholder:(BOOL)arg2 ;
-(BOOL)hasBeenOnScreen;
-(void)registerHandlerForAllMetricsWithClosure:(/*^block*/id)arg1 ;
-(void)removeHandler;
-(void)replacedWithHelper:(id)arg1 ;
-(void)offScreenWithCollapsed:(BOOL)arg1 ;
-(void)onScreenWithCollapsed:(BOOL)arg1 ;
-(void)placedWithPlacementType:(long long)arg1 wasNativeSlot:(BOOL)arg2 ;
-(void)interactedAtXPos:(float)arg1 yPos:(float)arg2 ;
-(void)contentLoadFailure;
-(void)setJourneyIdentifier:(NSString *)arg1 ;
-(NSString *)promotedContentIdentifier;
-(id<APMetricPrimitiveCreating>)primitiveCreator;
-(id<APPCPromotableContent>)promotedContent;
-(void)setPromotedContent:(id<APPCPromotableContent>)arg1 ;
-(void)delivered;
-(void)discardedWithCode:(long long)arg1 ;
-(void)createdWithAdType:(long long)arg1 ;
-(void)getAppWithButtonState:(long long)arg1 timeToPreviousInstall:(double)arg2 ;
-(void)setPromotedContentIdentifier:(NSString *)arg1 ;
-(void)setPrimitiveCreator:(id<APMetricPrimitiveCreating>)arg1 ;
-(void)setHasBeenOnScreen:(BOOL)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber, SAUIListenAfterSpeakingBehavior;

@interface SAUIAddDialogs : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * dialogs; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,retain) SAUIListenAfterSpeakingBehavior * listenAfterSpeakingBehavior; 
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setDialogs:(NSArray *)arg1 ;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(SAUIListenAfterSpeakingBehavior *)listenAfterSpeakingBehavior;
-(void)setListenAfterSpeakingBehavior:(SAUIListenAfterSpeakingBehavior *)arg1 ;
-(NSArray *)dialogs;
-(NSNumber *)listenAfterSpeaking;
@end


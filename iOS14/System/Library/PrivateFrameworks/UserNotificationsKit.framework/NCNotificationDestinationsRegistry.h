/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/


@class NSMutableDictionary, NSArray;

@interface NCNotificationDestinationsRegistry : NSObject {

	NSMutableDictionary* _destinations;
	NSMutableDictionary* _activeDestinations;
	NSMutableDictionary* _readyDestinations;

}

@property (nonatomic,retain) NSMutableDictionary * destinations;                    //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeDestinations;              //@synthesize activeDestinations=_activeDestinations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * readyDestinations;               //@synthesize readyDestinations=_readyDestinations - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * registeredDestinations; 
-(BOOL)isRegisteredDestination:(id)arg1 ;
-(void)registerDestination:(id)arg1 ;
-(id)destinationIdentifiersForRequestDestinations:(id)arg1 ;
-(id)init;
-(void)setDestinations:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)destinations;
-(void)setReadyDestinations:(NSMutableDictionary *)arg1 ;
-(void)unregisterDestination:(id)arg1 ;
-(id)_destinationsForRequestDestinations:(id)arg1 inDestinationDict:(id)arg2 ;
-(unsigned long long)count;
-(id)readyDestinationsForRequestDestinations:(id)arg1 ;
-(NSArray *)registeredDestinations;
-(void)setDestination:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setActiveDestinations:(NSMutableDictionary *)arg1 ;
-(void)setDestinationWithIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
-(void)unregisterDestinationForIdentifier:(id)arg1 ;
-(BOOL)hasActiveDestinationsForRequest:(id)arg1 ;
-(void)registerDestination:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setDestination:(id)arg1 ready:(BOOL)arg2 ;
-(NSMutableDictionary *)activeDestinations;
-(id)destinationsForRequestDestinations:(id)arg1 ;
-(NSMutableDictionary *)readyDestinations;
@end


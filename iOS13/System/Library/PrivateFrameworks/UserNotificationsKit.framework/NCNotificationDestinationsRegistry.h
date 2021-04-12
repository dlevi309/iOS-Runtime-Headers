/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)count;
-(NSMutableDictionary *)destinations;
-(void)setDestinations:(NSMutableDictionary *)arg1 ;
-(void)registerDestination:(id)arg1 ;
-(void)unregisterDestination:(id)arg1 ;
-(void)setDestination:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setDestination:(id)arg1 ready:(BOOL)arg2 ;
-(BOOL)isRegisteredDestination:(id)arg1 ;
-(id)destinationsForRequestDestinations:(id)arg1 ;
-(NSArray *)registeredDestinations;
-(id)readyDestinationsForRequestDestinations:(id)arg1 ;
-(void)registerDestination:(id)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)activeDestinations;
-(void)unregisterDestinationForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)readyDestinations;
-(id)_destinationsForRequestDestinations:(id)arg1 inDestinationDict:(id)arg2 ;
-(void)setDestinationWithIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)hasActiveDestinationsForRequest:(id)arg1 ;
-(id)destinationIdentifiersForRequestDestinations:(id)arg1 ;
-(void)setActiveDestinations:(NSMutableDictionary *)arg1 ;
-(void)setReadyDestinations:(NSMutableDictionary *)arg1 ;
@end


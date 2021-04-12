/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/PSBrokerCapabilities.h>

@class NSUUID, NSArray, NSSet, HMFUnfairLock, NSMutableDictionary, NSMutableArray, NSMapTable, NSString;

@interface PSBroker : HMFObject <HMFLogging, PSBrokerCapabilities> {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _topics;
	NSMutableArray* _remoteBrokers;
	NSMapTable* _topicManagers;
	NSArray* _transportFactories;
	NSMutableArray* _activeTransports;
	NSUUID* _identifier;
	NSString* _displayName;

}

@property (copy,readonly) NSArray * availableTopics; 
@property (copy) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSArray * exportedTopics; 
@property (copy,readonly) NSSet * supportedTransportIdentifiers; 
+(id)logCategory;
-(id)logIdentifier;
-(NSString *)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)attributeDescriptions;
-(NSUUID *)identifier;
-(NSString *)displayName;
-(NSSet *)supportedTransportIdentifiers;
-(NSArray *)exportedTopics;
-(NSArray *)availableTopics;
-(id)initWithIdentifier:(id)arg1 transportFactories:(id)arg2 ;
-(void)addRemoteBroker:(id)arg1 ;
-(void)removeRemoteBrokerWithIdentifier:(id)arg1 ;
-(void)registerManager:(id)arg1 forTopicWithName:(id)arg2 ;
-(id)topicWithName:(id)arg1 ;
@end


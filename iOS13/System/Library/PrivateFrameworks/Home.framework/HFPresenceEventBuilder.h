/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFEventBuilder.h>
#import <libobjc.A.dylib/HFLocationEventBuilder.h>

@class HFSelectedUserCollection, NSString;

@interface HFPresenceEventBuilder : HFEventBuilder <HFLocationEventBuilder> {

	HFSelectedUserCollection* _users;
	unsigned long long _eventType;
	unsigned long long _activationGranularity;

}

@property (nonatomic,retain) HFSelectedUserCollection * users;                      //@synthesize users=_users - In the implementation block
@property (assign,nonatomic) unsigned long long eventType;                          //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned long long activationGranularity;              //@synthesize activationGranularity=_activationGranularity - In the implementation block
@property (nonatomic,readonly) unsigned long long presenceEventType; 
@property (nonatomic,readonly) unsigned long long presenceUserType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_selectedUsersForPresenceEvent:(id)arg1 ;
-(NSString *)description;
-(id)initWithEvent:(id)arg1 ;
-(HFSelectedUserCollection *)users;
-(unsigned long long)eventType;
-(void)setEventType:(unsigned long long)arg1 ;
-(void)setUsers:(HFSelectedUserCollection *)arg1 ;
-(unsigned long long)presenceEventType;
-(unsigned long long)activationGranularity;
-(unsigned long long)presenceUserType;
-(id)buildNewEventFromCurrentState;
-(void)setActivationGranularity:(unsigned long long)arg1 ;
@end


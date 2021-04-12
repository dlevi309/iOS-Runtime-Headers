/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFMessageInternal, NSUUID, HMFMessageDestination, NSDictionary, NSString, HMFMessageTransport, HMFActivity, HMFLogEventSession;

@interface HMFMessage : HMFObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	HMFMessageInternal* _internal;

}

@property (nonatomic,readonly) HMFMessageInternal * internal;                       //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,retain) HMFMessageDestination * destination; 
@property (nonatomic,copy) NSDictionary * messagePayload; 
@property (nonatomic,copy) id responseHandler; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) double timeout; 
@property (nonatomic,readonly) long long qualityOfService; 
@property (nonatomic,__weak,readonly) HMFMessageTransport * transport; 
@property (nonatomic,readonly) HMFActivity * activity; 
@property (nonatomic,copy,readonly) NSDictionary * userInfo; 
@property (nonatomic,copy,readonly) NSDictionary * headers; 
@property (nonatomic,readonly) HMFLogEventSession * logEventSession; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)supportedClasses;
+(id)activityNameWithMessageName:(id)arg1 ;
+(id)messageWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 ;
+(id)messageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 ;
+(id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(HMFActivity *)activity;
-(long long)qualityOfService;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(double)timeout;
-(HMFMessageDestination *)destination;
-(void)setDestination:(HMFMessageDestination *)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(HMFMessageTransport *)transport;
-(HMFMessageInternal *)internal;
-(id)shortDescription;
-(id)errorForKey:(id)arg1 ;
-(id)uuidForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 keyPresent:(BOOL*)arg2 ;
-(id)timeZoneForKey:(id)arg1 ;
-(id)dateComponentsForKey:(id)arg1 ;
-(id)calendarForKey:(id)arg1 ;
-(id)nullForKey:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(NSDictionary *)headers;
-(NSDictionary *)messagePayload;
-(HMFLogEventSession *)logEventSession;
-(void)setMessagePayload:(NSDictionary *)arg1 ;
-(void)setLogEventSession:(HMFLogEventSession *)arg1 ;
-(id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 ;
-(id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 ;
-(id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 userInfo:(id)arg4 headers:(id)arg5 payload:(id)arg6 ;
-(void)__initWithInternalMessage:(id)arg1 ;
-(id)initWithInternalMessage:(id)arg1 ;
-(BOOL)respondWithPayload:(id)arg1 ;
-(BOOL)respondWithError:(id)arg1 ;
-(BOOL)respondWithPayload:(id)arg1 error:(id)arg2 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)predicateForKey:(id)arg1 ;
-(id)arrayOfDateComponentsForKey:(id)arg1 ;
@end


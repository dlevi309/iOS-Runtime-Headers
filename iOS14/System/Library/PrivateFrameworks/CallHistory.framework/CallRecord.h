/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CoreData/NSManagedObject.h>

@class CHRecentCall, NSSet, NSString, NSNumber, NSDate, NSUUID;

@interface CallRecord : NSManagedObject

@property (assign,nonatomic) unsigned chCallStatus; 
@property (nonatomic,readonly) long long chHandleType; 
@property (nonatomic,readonly) CHRecentCall * chRecentCall; 
@property (nonatomic,copy,readonly) NSSet * chRemoteParticipantHandles; 
@property (nonatomic,readonly) BOOL supportsCallCategory; 
@property (nonatomic,readonly) BOOL supportsHandleType; 
@property (nonatomic,readonly) BOOL supportsLocalParticipantUUID; 
@property (nonatomic,readonly) BOOL supportsOutgoingLocalParticipantUUID; 
@property (nonatomic,readonly) BOOL supportsRemoteParticipantHandles; 
@property (nonatomic,readonly) BOOL supportsServiceProvider; 
@property (nonatomic,readonly) BOOL supportsVerificationStatus; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,copy) NSNumber * answered; 
@property (nonatomic,copy) NSNumber * call_category; 
@property (nonatomic,copy) NSNumber * calltype; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSNumber * disconnected_cause; 
@property (nonatomic,copy) NSNumber * filtered_out_reason; 
@property (nonatomic,copy) NSNumber * duration; 
@property (nonatomic,copy) NSNumber * face_time_data; 
@property (nonatomic,copy) NSNumber * handle_type; 
@property (nonatomic,copy) NSString * iso_country_code; 
@property (nonatomic,copy) NSNumber * junkConfidence; 
@property (nonatomic,copy) NSUUID * localParticipantUUID; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * number_availability; 
@property (nonatomic,copy) NSNumber * originated; 
@property (nonatomic,copy) NSUUID * outgoingLocalParticipantUUID; 
@property (nonatomic,copy) NSNumber * read; 
@property (nonatomic,copy) NSString * service_provider; 
@property (nonatomic,copy) NSString * unique_id; 
@property (nonatomic,copy) NSNumber * verificationStatus; 
@property (nonatomic,retain) NSSet * remoteParticipantHandles; 
+(id)fetchRequest;
-(BOOL)supportsVerificationStatus;
-(id)compositeJunkConfidenceForContext:(id)arg1 ;
-(unsigned)chCallStatus;
-(BOOL)supportsServiceProvider;
-(BOOL)supportsRemoteParticipantHandles;
-(long long)chHandleType;
-(BOOL)supportsLocalParticipantUUID;
-(id)compositeServiceProviderForContext:(id)arg1 ;
-(id)compositeRemoteParticipantHandlesForContext:(id)arg1 ;
-(id)compositeHandleTypeForContext:(id)arg1 ;
-(NSSet *)chRemoteParticipantHandles;
-(BOOL)supportsOutgoingLocalParticipantUUID;
-(id)compositeLocalParticipantUUIDForContext:(id)arg1 ;
-(id)compositeVerificationStatusForContext:(id)arg1 ;
-(CHRecentCall *)chRecentCall;
-(BOOL)supportsCallCategory;
-(BOOL)supportsJunkConfidence;
-(id)compositeCallCategoryForContext:(id)arg1 ;
-(id)compositeOutgoingLocalParticipantUUIDForContext:(id)arg1 ;
-(BOOL)supportsHandleType;
-(void)setChCallStatus:(unsigned)arg1 ;
@end


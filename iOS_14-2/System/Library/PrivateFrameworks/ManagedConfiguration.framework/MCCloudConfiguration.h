/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface MCCloudConfiguration : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSDictionary* _memberQueueDetails;
	NSDictionary* _memberQueueSetAsideDetails;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;               //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueDetails;                      //@synthesize memberQueueDetails=_memberQueueDetails - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueSetAsideDetails;              //@synthesize memberQueueSetAsideDetails=_memberQueueSetAsideDetails - In the implementation block
@property (nonatomic,copy) NSDictionary * details; 
@property (nonatomic,copy) NSDictionary * setAsideDetails; 
+(id)sharedConfiguration;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(id)diagnosticsUploadURL;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)skipSetupKeys;
-(int)userMode;
-(BOOL)isSupervised;
-(BOOL)isProvisionallyEnrolled;
-(id)tvProviderUserToken;
-(void)setDetails:(NSDictionary *)arg1 ;
-(id)region;
-(BOOL)alreadySignedIntoFaceTime;
-(NSDictionary *)memberQueueDetails;
-(id)init;
-(BOOL)isAwaitingConfiguration;
-(id)MAIDUsername;
-(void)setMemberQueueSetAsideDetails:(NSDictionary *)arg1 ;
-(NSDictionary *)setAsideDetails;
-(NSDictionary *)memberQueueSetAsideDetails;
-(BOOL)hasMAIDCredential;
-(id)provisionalEnrollmentExpirationDate;
-(void)setMemberQueueDetails:(NSDictionary *)arg1 ;
-(NSDictionary *)details;
-(void)refreshDetailsFromDisk;
-(BOOL)isTeslaEnrolled;
-(id)mdmVersionProtocol;
-(id)language;
-(void)setSetAsideDetails:(NSDictionary *)arg1 ;
-(id)languageScript;
@end


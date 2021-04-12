/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue;
#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class NSString, NSDictionary, NSURL, NSObject;

@interface MCMDMConfiguration : NSObject {

	BOOL _isUserEnrollment;
	BOOL _memberQueueUseDevelopmentAPNS;
	BOOL _memberQueueSignMessage;
	int _memberQueueAccessRights;
	NSString* _memberQueueManagingProfileIdentifier;
	NSDictionary* _memberQueueOrganizationInfo;
	NSURL* _memberQueueServerURL;
	NSString* _personaID;
	NSString* _easEnrollmentID;
	NSObject*<OS_dispatch_queue> _memberQueue;
	SecIdentityRef _memberQueueIdentity;
	NSString* _memberQueueTopic;
	NSURL* _memberQueueCheckInURL;
	NSDictionary* _memberQueueMDMOptions;
	NSString* _memberQueuePushMagic;

}

@property (assign,nonatomic) BOOL isUserEnrollment;                                        //@synthesize isUserEnrollment=_isUserEnrollment - In the implementation block
@property (nonatomic,retain) NSString * personaID;                                         //@synthesize personaID=_personaID - In the implementation block
@property (nonatomic,retain) NSString * easEnrollmentID;                                   //@synthesize easEnrollmentID=_easEnrollmentID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                     //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSString * memberQueueManagingProfileIdentifier;              //@synthesize memberQueueManagingProfileIdentifier=_memberQueueManagingProfileIdentifier - In the implementation block
@property (assign,nonatomic) SecIdentityRef memberQueueIdentity;                           //@synthesize memberQueueIdentity=_memberQueueIdentity - In the implementation block
@property (nonatomic,retain) NSString * memberQueueTopic;                                  //@synthesize memberQueueTopic=_memberQueueTopic - In the implementation block
@property (nonatomic,retain) NSURL * memberQueueServerURL;                                 //@synthesize memberQueueServerURL=_memberQueueServerURL - In the implementation block
@property (nonatomic,retain) NSURL * memberQueueCheckInURL;                                //@synthesize memberQueueCheckInURL=_memberQueueCheckInURL - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueOrganizationInfo;                   //@synthesize memberQueueOrganizationInfo=_memberQueueOrganizationInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueMDMOptions;                         //@synthesize memberQueueMDMOptions=_memberQueueMDMOptions - In the implementation block
@property (assign,nonatomic) int memberQueueAccessRights;                                  //@synthesize memberQueueAccessRights=_memberQueueAccessRights - In the implementation block
@property (assign,nonatomic) BOOL memberQueueUseDevelopmentAPNS;                           //@synthesize memberQueueUseDevelopmentAPNS=_memberQueueUseDevelopmentAPNS - In the implementation block
@property (nonatomic,retain) NSString * memberQueuePushMagic;                              //@synthesize memberQueuePushMagic=_memberQueuePushMagic - In the implementation block
@property (assign,nonatomic) BOOL memberQueueSignMessage;                                  //@synthesize memberQueueSignMessage=_memberQueueSignMessage - In the implementation block
+(id)sharedConfiguration;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPersonaID:(NSString *)arg1 ;
-(id)init;
-(SecIdentityRef)memberQueueIdentity;
-(void)setMemberQueueSignMessage:(BOOL)arg1 ;
-(NSString *)personaID;
-(NSString *)memberQueueManagingProfileIdentifier;
-(void)setMemberQueueOrganizationInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)memberQueueOrganizationInfo;
-(void)setMemberQueueAccessRights:(int)arg1 ;
-(void)setIsUserEnrollment:(BOOL)arg1 ;
-(void)setMemberQueueTopic:(NSString *)arg1 ;
-(void)setMemberQueuePushMagic:(NSString *)arg1 ;
-(NSDictionary *)memberQueueMDMOptions;
-(NSString *)memberQueuePushMagic;
-(BOOL)isUserEnrollment;
-(void)setMemberQueueManagingProfileIdentifier:(NSString *)arg1 ;
-(NSString *)easEnrollmentID;
-(NSString *)memberQueueTopic;
-(int)memberQueueAccessRights;
-(BOOL)memberQueueUseDevelopmentAPNS;
-(NSURL *)memberQueueServerURL;
-(void)setMemberQueueServerURL:(NSURL *)arg1 ;
-(BOOL)memberQueueSignMessage;
-(void)setMemberQueueUseDevelopmentAPNS:(BOOL)arg1 ;
-(void)setMemberQueueMDMOptions:(NSDictionary *)arg1 ;
-(void)refreshDetailsFromDisk;
-(void)memberQueueForgetCurrentConfiguration;
-(BOOL)readConfigurationOutError:(id*)arg1 ;
-(void)setMemberQueueIdentity:(SecIdentityRef)arg1 ;
-(void)setMemberQueueCheckInURL:(NSURL *)arg1 ;
-(NSURL *)memberQueueCheckInURL;
-(void)setEasEnrollmentID:(NSString *)arg1 ;
@end


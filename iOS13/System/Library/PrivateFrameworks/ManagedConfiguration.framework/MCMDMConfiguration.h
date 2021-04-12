/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isUserEnrollment;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)memberQueueManagingProfileIdentifier;
-(NSString *)personaID;
-(void)setPersonaID:(NSString *)arg1 ;
-(NSString *)easEnrollmentID;
-(void)setEasEnrollmentID:(NSString *)arg1 ;
-(void)refreshDetailsFromDisk;
-(BOOL)readConfigurationOutError:(id*)arg1 ;
-(void)memberQueueForgetCurrentConfiguration;
-(void)setIsUserEnrollment:(BOOL)arg1 ;
-(void)setMemberQueueIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)memberQueueIdentity;
-(void)setMemberQueueManagingProfileIdentifier:(NSString *)arg1 ;
-(void)setMemberQueueTopic:(NSString *)arg1 ;
-(NSString *)memberQueueTopic;
-(void)setMemberQueueServerURL:(NSURL *)arg1 ;
-(void)setMemberQueueCheckInURL:(NSURL *)arg1 ;
-(NSURL *)memberQueueServerURL;
-(void)setMemberQueueAccessRights:(int)arg1 ;
-(void)setMemberQueueUseDevelopmentAPNS:(BOOL)arg1 ;
-(void)setMemberQueueSignMessage:(BOOL)arg1 ;
-(void)setMemberQueuePushMagic:(NSString *)arg1 ;
-(NSString *)memberQueuePushMagic;
-(void)setMemberQueueOrganizationInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)memberQueueOrganizationInfo;
-(void)setMemberQueueMDMOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)memberQueueMDMOptions;
-(NSURL *)memberQueueCheckInURL;
-(int)memberQueueAccessRights;
-(BOOL)memberQueueUseDevelopmentAPNS;
-(BOOL)memberQueueSignMessage;
@end


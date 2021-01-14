/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_os_log;
@class NSObject, NSUUID, HMUser, CKShare, CKContainer, NSString;

@interface HMUserCloudShareWithOwnerOperation : NSOperation <HMFLogging> {

	NSObject*<OS_os_log> _logger;
	BOOL _allowWriteAccess;
	/*^block*/id _completion;
	NSUUID* _operationID;
	HMUser* _currentUser;
	HMUser* _ownerUser;
	CKShare* _share;
	CKContainer* _container;
	/*^block*/id _analyticsEventSender;

}

@property (nonatomic,readonly) NSUUID * operationID;                 //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,readonly) HMUser * currentUser;                 //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) HMUser * ownerUser;                   //@synthesize ownerUser=_ownerUser - In the implementation block
@property (nonatomic,retain) CKShare * share;                        //@synthesize share=_share - In the implementation block
@property (nonatomic,readonly) CKContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) BOOL allowWriteAccess;                //@synthesize allowWriteAccess=_allowWriteAccess - In the implementation block
@property (readonly) id analyticsEventSender;                        //@synthesize analyticsEventSender=_analyticsEventSender - In the implementation block
@property (nonatomic,copy) id completion;                            //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(CKShare *)share;
-(void)setCompletion:(id)arg1 ;
-(NSUUID *)operationID;
-(HMUser *)currentUser;
-(HMUser *)ownerUser;
-(id)completion;
-(id)logIdentifier;
-(void)setShare:(CKShare *)arg1 ;
-(void)main;
-(id)initWithShare:(id)arg1 container:(id)arg2 ownerUser:(id)arg3 allowWriteAccess:(BOOL)arg4 currentUser:(id)arg5 ;
-(id)initWithShare:(id)arg1 container:(id)arg2 ownerUser:(id)arg3 allowWriteAccess:(BOOL)arg4 currentUser:(id)arg5 analyticsEventSender:(/*^block*/id)arg6 ;
-(id)analyticsEventSender;
-(BOOL)allowWriteAccess;
-(void)sendShareToOwner:(id)arg1 from:(id)arg2 savedOwnerAsParticipant:(id)arg3 share:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)saveShareAndObtainSavedOwner:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeOwnerAsParticipant:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchParticipantForLookupInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CKContainer *)container;
@end


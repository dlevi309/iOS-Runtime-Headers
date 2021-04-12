/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIdentityConduit.h>

@class NSMutableDictionary, CRKIDSMessageGenerator, CRKStudentdIDSBackedFacade;

@interface CRKStudentdIDSBackedIdentityConduit : NSObject <CRKIdentityConduit> {

	NSMutableDictionary* _operationsByIDSIdentifier;
	CRKIDSMessageGenerator* _messageGenerator;
	CRKStudentdIDSBackedFacade* _facade;

}

@property (nonatomic,readonly) NSMutableDictionary * operationsByIDSIdentifier;              //@synthesize operationsByIDSIdentifier=_operationsByIDSIdentifier - In the implementation block
@property (nonatomic,readonly) CRKIDSMessageGenerator * messageGenerator;                    //@synthesize messageGenerator=_messageGenerator - In the implementation block
@property (nonatomic,readonly) CRKStudentdIDSBackedFacade * facade;                          //@synthesize facade=_facade - In the implementation block
-(id)initWithDaemonProxy:(id)arg1 ;
-(CRKIDSMessageGenerator *)messageGenerator;
-(id)_operationToSendMessage:(id)arg1 toRecipients:(id)arg2 ;
-(CRKStudentdIDSBackedFacade *)facade;
-(id)operationToSendAdvertisingIdentifier:(id)arg1 activeCertificate:(id)arg2 stagedCertificate:(id)arg3 toRecipients:(id)arg4 fromDevice:(id)arg5 ;
-(id)operationToSendActiveCertificate:(id)arg1 stagedCertificate:(id)arg2 toRecipients:(id)arg3 fromDevice:(id)arg4 ;
-(id)operationToRequestCertificateFromClassMember:(id)arg1 fromDevice:(id)arg2 ;
-(NSMutableDictionary *)operationsByIDSIdentifier;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@interface CRKIDSMessageGenerator : NSObject {

	BOOL _destinationIsInstructor;

}

@property (nonatomic,readonly) BOOL destinationIsInstructor;              //@synthesize destinationIsInstructor=_destinationIsInstructor - In the implementation block
-(id)init;
-(id)messageWithAdvertisingIdentifier:(id)arg1 activeCertificate:(id)arg2 stagedCertificate:(id)arg3 fromDevice:(id)arg4 ;
-(id)messageWithActiveCertificate:(id)arg1 stagedCertificate:(id)arg2 fromDevice:(id)arg3 ;
-(id)messageToRequestCertificateFromDevice:(id)arg1 ;
-(id)initForInstructorDestination:(BOOL)arg1 ;
-(id)addInstructorKeyIfNeededToDictionary:(id)arg1 ;
-(BOOL)destinationIsInstructor;
@end


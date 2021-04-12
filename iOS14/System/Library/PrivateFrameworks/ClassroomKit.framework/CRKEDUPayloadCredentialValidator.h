/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class CRKEDUPayload;

@interface CRKEDUPayloadCredentialValidator : NSObject {

	BOOL _stub;
	BOOL _ephemeralMultiUserDevice;
	CRKEDUPayload* _payload;

}

@property (nonatomic,readonly) CRKEDUPayload * payload;                                                      //@synthesize payload=_payload - In the implementation block
@property (getter=isStub,nonatomic,readonly) BOOL stub;                                                      //@synthesize stub=_stub - In the implementation block
@property (getter=isEphemeralMultiUserDevice,nonatomic,readonly) BOOL ephemeralMultiUserDevice;              //@synthesize ephemeralMultiUserDevice=_ephemeralMultiUserDevice - In the implementation block
-(BOOL)isStub;
-(CRKEDUPayload *)payload;
-(BOOL)isInstructor;
-(BOOL)isStudent;
-(BOOL)isEphemeralMultiUserDevice;
-(BOOL)areCredentialsValidForSharediPadDeviceWithError:(id*)arg1 ;
-(BOOL)areCredentialsValidForOneToOneDeviceWithError:(id*)arg1 ;
-(BOOL)hasPayloadCertificate;
-(BOOL)validateLeaderAnchorsWithError:(id*)arg1 ;
-(BOOL)validateMemberAnchorsWithError:(id*)arg1 ;
-(BOOL)validateAnchorsWithKeyPath:(id)arg1 payloadKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithPayload:(id)arg1 isStub:(BOOL)arg2 isEphemeralMultiUserDevice:(BOOL)arg3 ;
-(BOOL)areCredentialsValidWithError:(id*)arg1 ;
@end


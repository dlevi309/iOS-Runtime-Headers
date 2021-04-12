/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIDSMessage.h>

@class NSUUID, DMFControlGroupIdentifier, NSString, NSData, NSDictionary;

@interface CRKRequestCertificatesIDSMessage : NSObject <CRKIDSMessage> {

	NSUUID* _requestIdentifier;
	DMFControlGroupIdentifier* _controlGroupIdentifier;
	long long _sourceRole;
	long long _destinationRole;
	NSString* _destinationDeviceIdentifier;
	NSData* _requesterCertificate;

}

@property (nonatomic,readonly) NSUUID * requestIdentifier;                                      //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) DMFControlGroupIdentifier * controlGroupIdentifier;              //@synthesize controlGroupIdentifier=_controlGroupIdentifier - In the implementation block
@property (nonatomic,readonly) long long sourceRole;                                            //@synthesize sourceRole=_sourceRole - In the implementation block
@property (nonatomic,readonly) long long destinationRole;                                       //@synthesize destinationRole=_destinationRole - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationDeviceIdentifier;                     //@synthesize destinationDeviceIdentifier=_destinationDeviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * requesterCertificate;                              //@synthesize requesterCertificate=_requesterCertificate - In the implementation block
@property (nonatomic,readonly) long long messageType; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)instanceWithDictionary:(id)arg1 ;
+(id)messageWithControlGroupIdentifier:(id)arg1 destinationDeviceIdentifier:(id)arg2 sourceRole:(long long)arg3 destinationRole:(long long)arg4 requesterCertificate:(id)arg5 ;
-(long long)messageType;
-(NSUUID *)requestIdentifier;
-(NSDictionary *)dictionaryValue;
-(long long)sourceRole;
-(long long)destinationRole;
-(DMFControlGroupIdentifier *)controlGroupIdentifier;
-(NSString *)destinationDeviceIdentifier;
-(NSData *)requesterCertificate;
-(id)initWithRequestIdentifier:(id)arg1 controlGroupIdentifier:(id)arg2 destinationDeviceIdentifier:(id)arg3 sourceRole:(long long)arg4 destinationRole:(long long)arg5 requesterCertificate:(id)arg6 ;
@end


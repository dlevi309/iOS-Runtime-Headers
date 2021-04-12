/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TUPubliclyAccessibleCopying.h>

@class NSUUID, TUCTCapabilitiesState, TUThumperCTCapabilitiesState, NSString;

@interface TUSenderIdentityCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying> {

	BOOL _supportsSimultaneousVoiceAndData;
	NSUUID* _senderIdentityUUID;
	TUCTCapabilitiesState* _csCallingCapabilitiesState;
	TUCTCapabilitiesState* _voLTECallingCapabilitiesState;
	TUCTCapabilitiesState* _wiFiCallingCapabilitiesState;
	TUThumperCTCapabilitiesState* _thumperCallingCapabilitiesState;

}

@property (nonatomic,copy,readonly) NSUUID * senderIdentityUUID;                                        //@synthesize senderIdentityUUID=_senderIdentityUUID - In the implementation block
@property (assign,nonatomic) BOOL supportsSimultaneousVoiceAndData;                                     //@synthesize supportsSimultaneousVoiceAndData=_supportsSimultaneousVoiceAndData - In the implementation block
@property (nonatomic,copy) TUCTCapabilitiesState * csCallingCapabilitiesState;                          //@synthesize csCallingCapabilitiesState=_csCallingCapabilitiesState - In the implementation block
@property (nonatomic,copy) TUCTCapabilitiesState * voLTECallingCapabilitiesState;                       //@synthesize voLTECallingCapabilitiesState=_voLTECallingCapabilitiesState - In the implementation block
@property (nonatomic,copy) TUCTCapabilitiesState * wiFiCallingCapabilitiesState;                        //@synthesize wiFiCallingCapabilitiesState=_wiFiCallingCapabilitiesState - In the implementation block
@property (nonatomic,copy) TUThumperCTCapabilitiesState * thumperCallingCapabilitiesState;              //@synthesize thumperCallingCapabilitiesState=_thumperCallingCapabilitiesState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsSimultaneousVoiceAndData;
-(TUCTCapabilitiesState *)csCallingCapabilitiesState;
-(TUCTCapabilitiesState *)voLTECallingCapabilitiesState;
-(TUCTCapabilitiesState *)wiFiCallingCapabilitiesState;
-(TUThumperCTCapabilitiesState *)thumperCallingCapabilitiesState;
-(NSUUID *)senderIdentityUUID;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(id)publiclyAccessibleCopy;
-(id)initWithSenderIdentityUUID:(id)arg1 ;
-(void)setCsCallingCapabilitiesState:(TUCTCapabilitiesState *)arg1 ;
-(void)setVoLTECallingCapabilitiesState:(TUCTCapabilitiesState *)arg1 ;
-(void)setWiFiCallingCapabilitiesState:(TUCTCapabilitiesState *)arg1 ;
-(void)setThumperCallingCapabilitiesState:(TUThumperCTCapabilitiesState *)arg1 ;
-(void)setSupportsSimultaneousVoiceAndData:(BOOL)arg1 ;
@end


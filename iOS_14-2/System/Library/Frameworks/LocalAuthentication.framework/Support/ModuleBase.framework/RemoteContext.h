/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
*/

#import <libobjc.A.dylib/LARemoteContextOwnership.h>

@protocol LARemoteContextOwnership;
@class NSString, NSUUID;

@interface RemoteContext : NSObject <LARemoteContextOwnership> {

	NSString* _description;
	NSUUID* _uuid;
	id<LARemoteContextOwnership> _ownership;
	unsigned long long _acmExternalizedFormHash;
	RemoteContext* _originalOwnership;

}

@property (nonatomic,readonly) NSUUID * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) id<LARemoteContextOwnership> ownership;                //@synthesize ownership=_ownership - In the implementation block
@property (assign,nonatomic) unsigned long long acmExternalizedFormHash;              //@synthesize acmExternalizedFormHash=_acmExternalizedFormHash - In the implementation block
@property (nonatomic,readonly) RemoteContext * originalOwnership;                     //@synthesize originalOwnership=_originalOwnership - In the implementation block
-(NSUUID *)uuid;
-(id)description;
-(id<LARemoteContextOwnership>)ownership;
-(void)dealloc;
-(RemoteContext *)originalOwnership;
-(id)initWithOwnership:(id)arg1 uuid:(id)arg2 description:(id)arg3 originalOwnership:(id)arg4 ;
-(unsigned long long)acmExternalizedFormHash;
-(void)setAcmExternalizedFormHash:(unsigned long long)arg1 ;
@end


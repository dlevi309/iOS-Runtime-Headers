/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/


#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
@interface PCSShareProtectionObject : NSObject {

	OpaquePCSShareProtection* _shareProtection;
	PCSIdentityDataRef _identity;

}

@property (nonatomic,readonly) OpaquePCSShareProtection* shareProtection;              //@synthesize shareProtection=_shareProtection - In the implementation block
-(void)dealloc;
-(id)sharingRequestDataForIdentity:(PCSPublicIdentityDataRef)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)sharingRequestDataForIdentity:(PCSPublicIdentityDataRef)arg1 owner:(void*)arg2 flags:(unsigned)arg3 error:(id*)arg4 ;
-(id)initWithShareProtectionRef:(OpaquePCSShareProtection*)arg1 ;
-(id)initWithSharingRequestData:(id)arg1 identitySet:(PCSIdentitySetDataRef)arg2 error:(id*)arg3 ;
-(id)sharingRequestDataForIdentity:(PCSPublicIdentityDataRef)arg1 error:(id*)arg2 ;
-(id)exportAcceptedSharingRequestWithError:(id*)arg1 ;
-(OpaquePCSShareProtection*)shareProtection;
@end


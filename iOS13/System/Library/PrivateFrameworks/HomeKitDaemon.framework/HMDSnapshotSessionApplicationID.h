/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDCameraSnapshotSessionID, NSString;

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying> {

	HMDCameraSnapshotSessionID* _sessionID;
	NSString* _applicationIdentifier;

}

@property (nonatomic,readonly) HMDCameraSnapshotSessionID * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * applicationIdentifier;                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationIdentifier;
-(HMDCameraSnapshotSessionID *)sessionID;
-(id)initWithSessionID:(id)arg1 applicationIdentifier:(id)arg2 ;
@end


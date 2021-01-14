/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDCameraSnapshotSessionID, HMDProcessInfo;

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying> {

	HMDCameraSnapshotSessionID* _sessionID;
	HMDProcessInfo* _processInfo;

}

@property (nonatomic,readonly) HMDCameraSnapshotSessionID * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) HMDProcessInfo * processInfo;                        //@synthesize processInfo=_processInfo - In the implementation block
-(HMDProcessInfo *)processInfo;
-(HMDCameraSnapshotSessionID *)sessionID;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 processInfo:(id)arg2 ;
@end


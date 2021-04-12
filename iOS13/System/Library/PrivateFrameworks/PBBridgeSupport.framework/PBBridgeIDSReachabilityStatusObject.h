/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface PBBridgeIDSReachabilityStatusObject : NSObject <NSCopying> {

	NSUUID* _idsDeviceID;
	unsigned long long _reachability;

}

@property (nonatomic,retain) NSUUID * idsDeviceID;                         //@synthesize idsDeviceID=_idsDeviceID - In the implementation block
@property (assign,nonatomic) unsigned long long reachability;              //@synthesize reachability=_reachability - In the implementation block
+(id)connectivityString:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)reachability;
-(void)setReachability:(unsigned long long)arg1 ;
-(NSUUID *)idsDeviceID;
-(void)setIdsDeviceID:(NSUUID *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIdsDeviceID:(NSUUID *)arg1 ;
-(unsigned long long)reachability;
-(NSUUID *)idsDeviceID;
-(id)description;
-(unsigned long long)hash;
-(void)setReachability:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


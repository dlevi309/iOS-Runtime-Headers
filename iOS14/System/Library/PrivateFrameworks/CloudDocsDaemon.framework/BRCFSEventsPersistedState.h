/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCPersistedState.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface BRCFSEventsPersistedState : BRCPersistedState <NSCopying> {

	NSUUID* _streamUUID;
	unsigned long long _latestEventID;
	unsigned long long _rootID;

}

@property (nonatomic,retain) NSUUID * streamUUID;                           //@synthesize streamUUID=_streamUUID - In the implementation block
@property (assign,nonatomic) unsigned long long latestEventID;              //@synthesize latestEventID=_latestEventID - In the implementation block
@property (assign,nonatomic) unsigned long long rootID;                     //@synthesize rootID=_rootID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)rootID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRootID:(unsigned long long)arg1 ;
-(unsigned long long)latestEventID;
-(NSUUID *)streamUUID;
-(id)initWithLatestEventID:(unsigned long long)arg1 streamUUID:(id)arg2 rootID:(unsigned long long)arg3 ;
-(void)setLatestEventID:(unsigned long long)arg1 ;
-(void)setStreamUUID:(NSUUID *)arg1 ;
@end


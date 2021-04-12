/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DNDSSyncSettings : NSObject <NSCopying> {

	BOOL _syncEnabled;

}

@property (getter=isSyncEnabled,nonatomic,readonly) BOOL syncEnabled;              //@synthesize syncEnabled=_syncEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSyncEnabled;
-(id)initWithSyncEnabled:(BOOL)arg1 ;
@end


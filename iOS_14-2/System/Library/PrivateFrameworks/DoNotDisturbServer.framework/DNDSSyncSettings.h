/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DNDSSyncSettings : NSObject <NSCopying> {

	BOOL _syncEnabled;

}

@property (getter=isSyncEnabled,nonatomic,readonly) BOOL syncEnabled;              //@synthesize syncEnabled=_syncEnabled - In the implementation block
-(id)description;
-(unsigned long long)hash;
-(BOOL)isSyncEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSyncEnabled:(BOOL)arg1 ;
@end


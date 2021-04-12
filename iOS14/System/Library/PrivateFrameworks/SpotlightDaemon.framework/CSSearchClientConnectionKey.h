/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/

#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class NSObject;

@interface CSSearchClientConnectionKey : NSObject <NSCopying> {

	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
+(id)keyWithConnection:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


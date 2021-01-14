/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RTDaemonClientRegistrarProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RTDaemonClientRegistrar : NSObject <NSSecureCoding, RTDaemonClientRegistrarProtocol, NSCopying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)registered;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)invocationsPending;
-(long long)countOfPendingInvocations;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NARApplicationState : NSObject <NSSecureCoding> {

	BOOL _restricted;
	BOOL _removedSystemApp;

}

@property (getter=isRestricted,nonatomic,readonly) BOOL restricted;                          //@synthesize restricted=_restricted - In the implementation block
@property (getter=isRemovedSystemApp,nonatomic,readonly) BOOL removedSystemApp;              //@synthesize removedSystemApp=_removedSystemApp - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isRestricted;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRemovedSystemApp;
-(id)initWithRestricted:(BOOL)arg1 removedSystemApp:(BOOL)arg2 ;
@end


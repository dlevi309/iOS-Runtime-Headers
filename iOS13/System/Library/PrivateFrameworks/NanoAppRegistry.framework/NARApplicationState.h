/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRestricted;
-(BOOL)isRemovedSystemApp;
-(id)initWithRestricted:(BOOL)arg1 removedSystemApp:(BOOL)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WLDeviceAuthentication : NSObject <NSSecureCoding> {

	NSString* _sessionUUID;

}

@property (nonatomic,readonly) NSString * sessionUUID;              //@synthesize sessionUUID=_sessionUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)sessionUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


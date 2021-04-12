/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sessionUUID;
@end


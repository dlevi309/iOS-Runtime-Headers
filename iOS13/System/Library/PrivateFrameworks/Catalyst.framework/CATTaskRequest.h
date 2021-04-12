/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CATTaskRequest : NSObject <NSSecureCoding> {

	BOOL _handlesNotifications;

}

@property (assign,nonatomic) BOOL handlesNotifications;              //@synthesize handlesNotifications=_handlesNotifications - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)handlesNotifications;
-(void)setHandlesNotifications:(BOOL)arg1 ;
@end


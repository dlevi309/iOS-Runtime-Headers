/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


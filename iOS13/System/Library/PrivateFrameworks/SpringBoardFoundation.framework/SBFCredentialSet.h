/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface SBFCredentialSet : NSObject <NSSecureCoding> {

	ACMHandleRef _acmContext;
	BOOL _ownsContext;
	NSData* _cachedCredentials;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSerializedCredentialSet:(id)arg1 ;
-(id)serializedCredentialSet;
@end


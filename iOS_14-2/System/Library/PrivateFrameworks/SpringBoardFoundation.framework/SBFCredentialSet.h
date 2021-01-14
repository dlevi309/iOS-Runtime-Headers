/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSerializedCredentialSet:(id)arg1 ;
-(id)serializedCredentialSet;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface _BSServiceOutgoingEndpoint : NSObject <NSCopying> {

	NSObject*<OS_xpc_object> _endpoint;
	NSString* _eDesc;
	unsigned _invalidationGeneration;

}
+(id)_wrapXPCEndpoint:(id)arg1 withDescription:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


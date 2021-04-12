/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface NSURLSessionTaskHTTPAuthenticator : NSObject <NSCopying> {

	NSSet* _statusCodes;

}

@property (copy) NSSet * statusCodes;              //@synthesize statusCodes=_statusCodes - In the implementation block
+(id)sessionTaskHTTPAuthenticatorWithContext:(id)arg1 statusCodes:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSSet *)statusCodes;
-(id)initWithStatusCodes:(id)arg1 ;
-(void)setStatusCodes:(NSSet *)arg1 ;
@end


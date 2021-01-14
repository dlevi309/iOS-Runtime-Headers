/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString;

@interface AASigningSession : NSObject {

	NACContextOpaque_Ref _context;
	NSString* _certURL;
	NSString* _sessionURL;
	int _error;

}

@property (nonatomic,readonly) int error;              //@synthesize error=_error - In the implementation block
+(id)_badURLError;
+(id)establishedSessionWithCertURL:(id)arg1 sessionURL:(id)arg2 error:(id*)arg3 ;
-(id)initWithCertURL:(id)arg1 sessionURL:(id)arg2 ;
-(void)establishSession;
-(id)signatureForData:(id)arg1 ;
-(int)error;
-(void)dealloc;
@end


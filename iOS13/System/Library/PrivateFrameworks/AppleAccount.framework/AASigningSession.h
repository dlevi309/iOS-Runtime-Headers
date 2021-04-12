/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)establishedSessionWithCertURL:(id)arg1 sessionURL:(id)arg2 error:(id*)arg3 ;
+(id)_badURLError;
-(void)dealloc;
-(int)error;
-(id)initWithCertURL:(id)arg1 sessionURL:(id)arg2 ;
-(void)establishSession;
-(id)signatureForData:(id)arg1 ;
@end


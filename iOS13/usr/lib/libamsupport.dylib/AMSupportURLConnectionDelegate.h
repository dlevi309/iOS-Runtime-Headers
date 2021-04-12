/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libamsupport.dylib
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSDictionary, NSURLResponse, NSMutableData, NSError, NSData, NSString;

@interface AMSupportURLConnectionDelegate : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

	BOOL requestComplete;
	NSDictionary* options;
	NSURLResponse* response;
	NSMutableData* _data;
	NSError* _error;

}

@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSData *)data;
-(NSError *)error;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)initWithData:(id)arg1 Options:(id)arg2 ;
-(id)waitForResponseOrError:(id*)arg1 ;
@end


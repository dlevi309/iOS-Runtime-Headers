/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libobjc.A.dylib/ACFHTTPMethodInvocationDelegate.h>

@class NSError, NSData, NSString;

@interface ACFHTTPMethodSynchronousInvocationHelper : NSObject <ACFHTTPMethodInvocationDelegate> {

	NSError* _error;
	NSData* _result;

}

@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (retain) NSData * result;                                 //@synthesize result=_result - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSData *)result;
-(void)setResult:(NSData *)arg1 ;
-(void)httpMethodInvocation:(id)arg1 didFinishWithResult:(id)arg2 ;
-(void)httpMethodInvocation:(id)arg1 didFailWithError:(id)arg2 ;
@end


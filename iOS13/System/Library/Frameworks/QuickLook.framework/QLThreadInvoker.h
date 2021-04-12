/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@class NSURLConnection, NSData, NSError;

@interface QLThreadInvoker : NSObject {

	NSURLConnection* _connection;
	NSData* _data;
	NSError* _error;

}
-(id)initWithConnection:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)connectionDidReceiveData:(id)arg1 ;
-(void)connectionDidReceiveDataLengthReceived:(id)arg1 ;
-(void)connectionDidFailWithError:(id)arg1 ;
@end


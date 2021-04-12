/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, VSDeveloperServiceConnection;

@interface VSDeveloperIdentityProviderFetchAllOperation : VSAsyncOperation {

	VSOptional* _result;
	VSDeveloperServiceConnection* _connection;

}

@property (nonatomic,retain) VSOptional * result;                                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSDeveloperServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(VSOptional *)result;
-(VSDeveloperServiceConnection *)connection;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setConnection:(VSDeveloperServiceConnection *)arg1 ;
-(void)executionDidBegin;
@end


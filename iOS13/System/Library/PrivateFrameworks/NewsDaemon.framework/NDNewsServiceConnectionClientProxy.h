/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
*/

#import <libobjc.A.dylib/NDNewsServiceClient.h>

@protocol NDNewsServiceClient;
@class NSString;

@interface NDNewsServiceConnectionClientProxy : NSObject <NDNewsServiceClient> {

	id<NDNewsServiceClient> _client;

}

@property (assign,nonatomic,__weak) id<NDNewsServiceClient> client;              //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NDNewsServiceClient>)client;
-(void)setClient:(id<NDNewsServiceClient>)arg1 ;
-(void)serviceHasNewTodayResults;
@end


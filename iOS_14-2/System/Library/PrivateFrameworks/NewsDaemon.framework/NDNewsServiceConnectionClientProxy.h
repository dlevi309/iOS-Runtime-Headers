/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


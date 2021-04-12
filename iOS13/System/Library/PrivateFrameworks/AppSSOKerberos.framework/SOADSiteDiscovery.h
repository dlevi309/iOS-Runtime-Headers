/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


@class NSString, NSOperationQueue;

@interface SOADSiteDiscovery : NSObject {

	NSString* _realm;
	NSOperationQueue* _queue;

}

@property (nonatomic,retain) NSString * realm;                      //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)queue;
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(id)initWithRealm:(id)arg1 ;
-(void)discoverADInfoUsingSourceAppBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end


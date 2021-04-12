/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSURL, NSObject, NSDictionary;

@interface TSURemotePropertyList : NSObject {

	NSURL* _remoteURL;
	NSURL* _localURL;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _propertyList;
	NSObject*<OS_dispatch_queue> _checkQueue;
	NSObject*<OS_dispatch_source> _updateTimer;
	BOOL _didUpdateAtLeastOnce;

}
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(id)URLRequest;
-(void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)startUpdateTimer;
-(void)processWillSuspend:(id)arg1 ;
-(void)processDidResume:(id)arg1 ;
-(double)timeIntervalUntilNextUpdate;
-(void)checkForUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)validateUserDefaultsDownloadURL:(id)arg1 ;
-(id)deserializePropertyListData:(id)arg1 error:(out id*)arg2 ;
-(void)processPropertyList:(id)arg1 ;
-(id)initWithRemoteURL:(id)arg1 localURL:(id)arg2 ;
-(void)updateIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
@end


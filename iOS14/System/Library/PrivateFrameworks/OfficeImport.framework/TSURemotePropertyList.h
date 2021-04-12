/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryForKey:(id)arg1 ;
-(id)init;
-(id)URLForKey:(id)arg1 ;
-(void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)URLRequest;
-(void)dealloc;
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


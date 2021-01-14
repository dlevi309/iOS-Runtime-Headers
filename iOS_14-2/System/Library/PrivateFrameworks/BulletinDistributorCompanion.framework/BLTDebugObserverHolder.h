/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BBObserverDelegate.h>

@protocol BLTDebugObserverWatchKitAppList;
@class BBObserver, NSString;

@interface BLTDebugObserverHolder : NSObject <BBObserverDelegate> {

	BBObserver* _observer;
	id<BLTDebugObserverWatchKitAppList> _wkAppList;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)startWithWKAppList:(id)arg1 ;
-(id)init;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(void)dealloc;
-(id)initWithWKAppList:(id)arg1 ;
@end


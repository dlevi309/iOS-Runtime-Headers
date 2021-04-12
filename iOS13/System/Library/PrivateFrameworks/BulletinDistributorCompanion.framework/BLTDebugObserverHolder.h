/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
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
-(void)dealloc;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(id)initWithWKAppList:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthAppPlugin.bundle/HealthAppPlugin
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDProfileExtension.h>

@class HDProfile, HDHealthAppDataObserver, NSString;

@interface HDHealthAppProfileExtension : NSObject <HDHealthDaemonReadyObserver, HDProfileExtension> {

	HDProfile* _profile;
	HDHealthAppDataObserver* _dataObserver;

}

@property (nonatomic,retain) HDHealthAppDataObserver * dataObserver;              //@synthesize dataObserver=_dataObserver - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                          //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(HDHealthAppDataObserver *)dataObserver;
-(void)setDataObserver:(HDHealthAppDataObserver *)arg1 ;
@end


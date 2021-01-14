/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)daemonReady:(id)arg1 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setDataObserver:(HDHealthAppDataObserver *)arg1 ;
-(HDProfile *)profile;
-(HDHealthAppDataObserver *)dataObserver;
@end


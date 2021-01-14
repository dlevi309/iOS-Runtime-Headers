/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthAppPlugin.bundle/HealthAppPlugin
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDProfileExtension.h>
#import <libobjc.A.dylib/HDHealthDaemonExtension.h>

@class HDHealthAppProfileObserver, HDPrimaryProfile, NSString;

@interface HDHealthAppDaemonExtension : NSObject <HDHealthDaemonReadyObserver, HDProfileExtension, HDHealthDaemonExtension> {

	HDHealthAppProfileObserver* _profileObserver;
	HDPrimaryProfile* _profile;

}

@property (nonatomic,retain) HDHealthAppProfileObserver * profileObserver;              //@synthesize profileObserver=_profileObserver - In the implementation block
@property (nonatomic,retain) HDPrimaryProfile * profile;                                //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(void)setProfile:(HDPrimaryProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(HDPrimaryProfile *)profile;
-(HDHealthAppProfileObserver *)profileObserver;
-(void)setProfileObserver:(HDHealthAppProfileObserver *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@class BKSApplicationStateMonitor, NSString, UIImage, NSURL;

@interface InterAppAudioApp : NSObject {

	BKSApplicationStateMonitor* appMonitor;
	BOOL _isHost;
	BOOL _isCurrentApp;
	BOOL _isForeground;
	long long _key;
	NSString* _name;
	UIImage* _icon;
	NSURL* _url;

}

@property (nonatomic,readonly) long long key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSURL * url;                    //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL isHost;                    //@synthesize isHost=_isHost - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentApp;              //@synthesize isCurrentApp=_isCurrentApp - In the implementation block
@property (nonatomic,readonly) BOOL isForeground;              //@synthesize isForeground=_isForeground - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(long long)key;
-(NSURL *)url;
-(UIImage *)icon;
-(BOOL)isForeground;
-(id)init:(const InterAppAudioAppInfo*)arg1 iconSize:(float)arg2 ;
-(BOOL)processRunningOnForeground:(int)arg1 ;
-(BOOL)isHost;
-(BOOL)isCurrentApp;
@end


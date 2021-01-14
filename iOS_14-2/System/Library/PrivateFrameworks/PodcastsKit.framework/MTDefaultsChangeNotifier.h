/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/MTDictionaryDiff.h>

@class NSUserDefaults;

@interface MTDefaultsChangeNotifier : MTDictionaryDiff {

	BOOL _running;
	NSUserDefaults* _defaults;

}

@property (assign,getter=isRunning,nonatomic) BOOL running;              //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSUserDefaults * defaults;                  //@synthesize defaults=_defaults - In the implementation block
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(NSUserDefaults *)defaults;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)start;
-(void)stop;
-(BOOL)isRunning;
-(void)dealloc;
-(id)initWithProperties:(id)arg1 defaults:(id)arg2 ;
-(void)_defaultsChanged;
@end


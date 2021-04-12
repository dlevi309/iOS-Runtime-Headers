/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol TVPPlayback;
#import <VideosUI/VideosUI-Structs.h>
@class NSMutableDictionary, NSObject, NSString;

@interface VUIPlaybackReporterSession : NSObject {

	NSMutableDictionary* _metadata;
	os_unfair_lock_s _metadataLock;
	BOOL _reportingEnabled;
	NSObject*<TVPPlayback> _player;
	NSString* _UUID;
	id _context;

}

@property (assign,nonatomic,__weak) NSObject*<TVPPlayback> player;              //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) id context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * UUID;                                 //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) BOOL reportingEnabled;                             //@synthesize reportingEnabled=_reportingEnabled - In the implementation block
+(id)transitionTypeForMediaControllerAutoStart:(id)arg1 ;
+(id)transitionReasonForMediaControllerStartReason:(id)arg1 autoStart:(id)arg2 ;
+(id)transitionReasonForMediaControllerStopReason:(id)arg1 autoStart:(id)arg2 ;
-(id)description;
-(NSString *)UUID;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSObject*<TVPPlayback>)player;
-(void)setPlayer:(NSObject*<TVPPlayback>)arg1 ;
-(BOOL)reportingEnabled;
-(id)consumeMetadataForKey:(id)arg1 ;
-(id)consumeStopType;
-(id)consumeStopReason;
-(id)consumeStartType;
-(id)consumeStartReason;
-(id)initWithPlayer:(id)arg1 context:(id)arg2 ;
-(void)setReportingEnabled:(BOOL)arg1 ;
-(void)setMetadata:(id)arg1 forKey:(id)arg2 ;
-(id)metadataForKey:(id)arg1 ;
@end


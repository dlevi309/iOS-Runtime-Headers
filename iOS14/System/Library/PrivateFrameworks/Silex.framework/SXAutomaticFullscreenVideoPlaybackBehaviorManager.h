/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXVideoPlaybackObserver.h>

@protocol SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate;
@class NSString;

@interface SXAutomaticFullscreenVideoPlaybackBehaviorManager : NSObject <SXVideoPlaybackObserver> {

	unsigned long long _behavior;
	id<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> _delegate;
	CGRect _videoBounds;

}

@property (assign,nonatomic) CGRect videoBounds;                                                                         //@synthesize videoBounds=_videoBounds - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;                                                                //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic,__weak) id<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBehavior:(unsigned long long)arg1 ;
-(id<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate>)delegate;
-(unsigned long long)behavior;
-(void)setDelegate:(id<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate>)arg1 ;
-(void)conditionsChanged;
-(void)setVideoBounds:(CGRect)arg1 ;
-(CGRect)videoBounds;
-(void)playbackCoordinatorStartedPlayback:(id)arg1 ;
-(void)playbackCoordinatorResumedPlayback:(id)arg1 ;
-(BOOL)fullscreenPlaybackRequiredForCurrentConditions;
@end


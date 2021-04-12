/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUINowPlayingTimeBoundFeature.h>
#import <libobjc.A.dylib/VUINowPlayingTVAdvisoryFeature.h>
@class NSArray;


@protocol VUINowPlayingTVAdvisoryFeature <VUINowPlayingTimeBoundFeature>
@property (nonatomic,copy) NSArray * advisoryDisabledTimeRanges; 
@required
-(void)setAdvisoryDisabledTimeRanges:(id)arg1;
-(NSArray *)advisoryDisabledTimeRanges;

@end


@class NSArray, NSString;

@interface VUINowPlayingTVAdvisoryFeature : VUINowPlayingTimeBoundFeature <VUINowPlayingTVAdvisoryFeature> {

	NSArray* _advisoryDisabledTimeRanges;

}

@property (nonatomic,copy) NSArray * advisoryDisabledTimeRanges;                   //@synthesize advisoryDisabledTimeRanges=_advisoryDisabledTimeRanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove; 
@property (nonatomic,retain) id userInfo; 
@property (assign,nonatomic) double startTime; 
@property (nonatomic,readonly) double duration; 
@property (assign,getter=isSkippable,nonatomic) BOOL skippable; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isSkippable;
-(id)initWithType:(unsigned long long)arg1 startTime:(double)arg2 duration:(double)arg3 ;
-(void)setAdvisoryDisabledTimeRanges:(NSArray *)arg1 ;
-(NSArray *)advisoryDisabledTimeRanges;
@end


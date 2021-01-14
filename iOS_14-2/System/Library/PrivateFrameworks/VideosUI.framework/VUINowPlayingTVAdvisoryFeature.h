/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) double startTime; 
@property (nonatomic,readonly) double duration; 
@property (assign,getter=isSkippable,nonatomic) BOOL skippable; 
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove; 
@property (nonatomic,retain) id userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSkippable;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 startTime:(double)arg2 duration:(double)arg3 ;
-(void)setAdvisoryDisabledTimeRanges:(NSArray *)arg1 ;
-(NSArray *)advisoryDisabledTimeRanges;
@end


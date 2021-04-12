/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OKPresentation, NSString, OKMediaItem, OKPresentationCanvas, OKProducerPlugin;

@interface OKPresentationGuideline : NSObject <NSCopying> {

	OKPresentation* _presentation;
	unsigned long long _type;
	double _timestamp;
	NSString* _key;
	id _value;
	OKMediaItem* _mediaItem;
	NSString* _mediaItemUniqueURLString;
	OKPresentationCanvas* _presentationCanvas;
	unsigned long long _presentationCanvasType;
	NSString* _presentationCanvasKeyPath;
	OKProducerPlugin* _producerPlugin;
	NSString* _producerPluginUUID;

}

@property (assign,nonatomic) OKPresentation * presentation;                          //@synthesize presentation=_presentation - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * key;                                           //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id value;                                               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) OKMediaItem * mediaItem;                                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) OKProducerPlugin * producerPlugin;                      //@synthesize producerPlugin=_producerPlugin - In the implementation block
@property (nonatomic,retain) OKPresentationCanvas * presentationCanvas;              //@synthesize presentationCanvas=_presentationCanvas - In the implementation block
+(id)guidelineAuthoringTitle:(id)arg1 ;
+(id)guidelineAuthoringRecommendedResolutionSizes:(id)arg1 ;
+(id)guidelineLiveAuthoringEnabled:(BOOL)arg1 ;
+(id)guidelineAuthoringTransitionSettings:(id)arg1 ;
+(id)guidelineAuthoringDefaultMobileRecommendedResolutionSizes;
+(id)guidelineWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3 ;
+(id)defaultMobileRecommendedResolutionSizes;
+(id)globalUniqueKeyForKey:(id)arg1 ;
+(id)globalUniqueKeyForKey:(id)arg1 mediaItem:(id)arg2 ;
+(id)globalUniqueKeyForKey:(id)arg1 presentationCanvas:(id)arg2 ;
+(id)globalUniqueKeyForKey:(id)arg1 producerPlugin:(id)arg2 ;
+(id)globalUniqueKeyForKey:(id)arg1 mediaItem:(id)arg2 presentationCanvas:(id)arg3 producerPlugin:(id)arg4 ;
+(id)guidelineAuthoringRandomSeed:(unsigned long long)arg1 ;
+(id)guidelineAuthoringSynopsis:(id)arg1 ;
+(id)guidelineAuthoringAudioURLs:(id)arg1 ;
+(id)guidelineAuthoringAttributedTitle:(id)arg1 ;
+(id)guidelineAuthoringInteractiveTransitionSettings:(id)arg1 ;
+(id)guidelineAuthoringMediaAttributes:(id)arg1 ;
+(id)guidelineAuthoringPageDuration:(double)arg1 ;
+(id)guidelineAuthoringCurrentPageDuration:(double)arg1 ;
+(id)guidelineAuthoringTotalDuration:(double)arg1 ;
+(id)guidelineAuthoringDurationFactor:(double)arg1 ;
+(id)guidelineAuthoringMinimumDuration:(double)arg1 ;
+(id)guidelineAuthoringMaximumDuration:(double)arg1 ;
+(id)guidelineAuthoringFitToAudioDuration:(BOOL)arg1 ;
+(id)guidelineAuthoringDebuggingEnabled:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)setMediaItem:(OKMediaItem *)arg1 ;
-(void)setPresentation:(OKPresentation *)arg1 ;
-(id)init;
-(double)timestamp;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)description;
-(OKMediaItem *)mediaItem;
-(id)dictionary;
-(NSString *)key;
-(unsigned long long)type;
-(OKPresentation *)presentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)value;
-(void)dealloc;
-(id)initWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)presentationCanvasKeyPath;
-(void)setPresentationCanvas:(OKPresentationCanvas *)arg1 ;
-(void)setProducerPlugin:(OKProducerPlugin *)arg1 ;
-(OKPresentationCanvas *)presentationCanvas;
-(OKProducerPlugin *)producerPlugin;
-(id)globalUniqueKey;
@end


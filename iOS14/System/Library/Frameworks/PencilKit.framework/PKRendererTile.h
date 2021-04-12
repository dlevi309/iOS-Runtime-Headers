/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSUUID, NSArray, PKRendererTileProperties;

@interface PKRendererTile : CALayer {

	Ad _cachedContentsScale;
	Aq _renderCount;
	Ad _lastUsedTimestamp;
	BOOL _outOfDate;
	NSUUID* _identifier;
	long long _level;
	NSArray* _renderedStrokes;
	long long _currentlyRenderingCount;
	CGPoint _offset;
	CGRect _drawingFrame;

}

@property (nonatomic,readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long level;                                    //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) CGPoint offset;                                     //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) PKRendererTileProperties * properties; 
@property (nonatomic,readonly) double drawingContentsScale; 
@property (nonatomic,readonly) double lastUsedTimestamp; 
@property (nonatomic,readonly) CGRect drawingFrame;                                //@synthesize drawingFrame=_drawingFrame - In the implementation block
@property (nonatomic,copy) NSArray * renderedStrokes;                              //@synthesize renderedStrokes=_renderedStrokes - In the implementation block
@property (assign) BOOL outOfDate;                                                 //@synthesize outOfDate=_outOfDate - In the implementation block
@property (readonly) long long renderCount; 
@property (assign,nonatomic) long long currentlyRenderingCount;                    //@synthesize currentlyRenderingCount=_currentlyRenderingCount - In the implementation block
+(double)tileSizeForLevel:(long long)arg1 ;
+(CGRect)layerFrameForLevel:(long long)arg1 offset:(CGPoint)arg2 ;
-(PKRendererTileProperties *)properties;
-(void)setContentsScale:(double)arg1 ;
-(id)debugDescription;
-(CGPoint)offset;
-(id)description;
-(void)setFrame:(CGRect)arg1 ;
-(long long)level;
-(double)lastUsedTimestamp;
-(NSUUID *)identifier;
-(void)cancel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSArray *)renderedStrokes;
-(CGRect)drawingFrame;
-(void)updateDisableTransactionActions:(BOOL)arg1 ;
-(void)setRenderedStrokes:(NSArray *)arg1 ;
-(void)setOutOfDate:(BOOL)arg1 ;
-(id)initWithLevel:(long long)arg1 offset:(CGPoint)arg2 drawingScale:(double)arg3 contentsScale:(double)arg4 ;
-(void)updateLastUsedTimestamp;
-(long long)currentlyRenderingCount;
-(void)setCurrentlyRenderingCount:(long long)arg1 ;
-(double)drawingContentsScale;
-(BOOL)outOfDate;
-(long long)renderCount;
-(void)updateFrameForScale:(double)arg1 ;
-(void)showDebugLayer;
@end


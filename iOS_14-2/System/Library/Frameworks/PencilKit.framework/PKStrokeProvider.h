/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/CHStrokeProvider.h>

@class NSArray, NSOrderedSet, NSMutableOrderedSet, NSMutableDictionary, PKDrawing, NSString;

@interface PKStrokeProvider : NSObject <CHStrokeProvider> {

	BOOL _disabled;
	NSMutableOrderedSet* _strokeSlices;
	BOOL _shouldProcessVisibleStrokes;
	NSArray* _visibleOnscreenStrokes;
	NSMutableDictionary* _strokeIdsByEncoding;
	long long groupingPriority;
	PKDrawing* _drawing;

}

@property (nonatomic,readonly) PKDrawing * drawing;                                         //@synthesize drawing=_drawing - In the implementation block
@property (retain,readonly) id<CHStrokeProviderVersion> strokeProviderVersion; 
@property (copy,readonly) NSArray * orderedStrokes; 
@property (readonly) long long groupingPriority; 
@property (readonly) CGSize drawingCanvasSize; 
@property (copy,readonly) NSOrderedSet * visibleStrokeEncodedIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_identifiersForStrokes:(id)arg1 ;
+(id)slicesForStrokes:(id)arg1 ;
-(id)slices;
-(NSString *)description;
-(PKDrawing *)drawing;
-(id)initWithDrawing:(id)arg1 ;
-(id<CHStrokeProviderVersion>)strokeProviderVersion;
-(NSArray *)orderedStrokes;
-(id)strokeForIdentifier:(id)arg1 ;
-(id)sliceForIdentifier:(id)arg1 ;
-(id)_cachedStrokeIdentifier:(id)arg1 ;
-(void)_cacheStrokeIdentifier:(id)arg1 withEncodedStrokeIdentifier:(id)arg2 ;
-(id)encodedStrokeIdentifier:(id)arg1 ;
-(long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2 ;
-(unsigned long long)compareStyleOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2 ;
-(id)strokeIdentifierFromData:(id)arg1 ;
-(long long)groupingPriority;
-(BOOL)isStroke:(id)arg1 versionOfStrokeWithIdentifier:(id)arg2 ;
-(long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2 ;
-(CGSize)drawingCanvasSize;
-(NSOrderedSet *)visibleStrokeEncodedIdentifiers;
-(id)initWithDrawing:(id)arg1 visibleOnscreenStrokes:(id)arg2 shouldProcessVisibleStrokes:(BOOL)arg3 ;
-(BOOL)enumerateChangesSinceVersion:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end


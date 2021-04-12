/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/CHStrokeProvider.h>

@class NSArray, NSMutableOrderedSet, PKDrawing, NSString;

@interface PKStrokeProvider : NSObject <CHStrokeProvider> {

	BOOL _disabled;
	NSMutableOrderedSet* _strokeSlices;
	PKDrawing* _drawing;

}

@property (nonatomic,readonly) PKDrawing * drawing;                                         //@synthesize drawing=_drawing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) id<CHStrokeProviderVersion> strokeProviderVersion; 
@property (copy,readonly) NSArray * orderedStrokes; 
-(NSString *)description;
-(id)slices;
-(PKDrawing *)drawing;
-(id)strokeForIdentifier:(id)arg1 ;
-(id)initWithDrawing:(id)arg1 ;
-(id<CHStrokeProviderVersion>)strokeProviderVersion;
-(NSArray *)orderedStrokes;
-(id)sliceForIdentifier:(id)arg1 ;
-(long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2 ;
-(BOOL)isStroke:(id)arg1 versionOfStrokeWithIdentifier:(id)arg2 ;
-(long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2 ;
-(BOOL)enumerateChangesSinceVersion:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end


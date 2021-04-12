/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphHighlightsInsertion : PGGraphChange {

	NSSet* _highlightLocalIdentifiers;
	NSSet* _highlights;

}

@property (nonatomic,readonly) NSSet * highlightLocalIdentifiers;              //@synthesize highlightLocalIdentifiers=_highlightLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * highlights;                             //@synthesize highlights=_highlights - In the implementation block
-(id)description;
-(unsigned long long)type;
-(unsigned long long)changeCount;
-(NSSet *)highlights;
-(id)initWithHighlightLocalIdentifiers:(id)arg1 ;
-(id)initWithHighlights:(id)arg1 ;
-(NSSet *)highlightLocalIdentifiers;
@end


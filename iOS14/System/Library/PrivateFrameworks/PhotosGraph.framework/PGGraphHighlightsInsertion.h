/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)changeCount;
-(id)description;
-(unsigned long long)type;
-(NSSet *)highlights;
-(id)initWithHighlightLocalIdentifiers:(id)arg1 ;
-(id)initWithHighlights:(id)arg1 ;
-(NSSet *)highlightLocalIdentifiers;
@end


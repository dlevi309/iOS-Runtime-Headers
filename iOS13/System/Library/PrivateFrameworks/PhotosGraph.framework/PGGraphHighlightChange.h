/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphHighlightNode;

@interface PGGraphHighlightChange : PGGraphChange {

	NSString* _highlightLocalIdentifier;
	PGGraphHighlightNode* _highlightNode;
	unsigned long long _updateTypes;

}

@property (nonatomic,readonly) NSString * highlightLocalIdentifier;              //@synthesize highlightLocalIdentifier=_highlightLocalIdentifier - In the implementation block
@property (nonatomic,retain) PGGraphHighlightNode * highlightNode;               //@synthesize highlightNode=_highlightNode - In the implementation block
@property (nonatomic,readonly) unsigned long long updateTypes;                   //@synthesize updateTypes=_updateTypes - In the implementation block
-(id)description;
-(unsigned long long)type;
-(NSString *)highlightLocalIdentifier;
-(PGGraphHighlightNode *)highlightNode;
-(void)mergeChange:(id)arg1 ;
-(unsigned long long)updateTypes;
-(id)initWithHighlightLocalIdentifier:(id)arg1 updateTypes:(unsigned long long)arg2 ;
-(void)setHighlightNode:(PGGraphHighlightNode *)arg1 ;
@end


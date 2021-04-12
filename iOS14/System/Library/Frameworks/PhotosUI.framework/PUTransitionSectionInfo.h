/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSIndexSet, NSArray, NSIndexPath;

@interface PUTransitionSectionInfo : NSObject {

	long long _transitionSection;
	NSIndexSet* _visualSections;
	NSArray* _visualRowStartMarkers;
	long long _contiguousRows;
	NSIndexPath* _anchorRealPath;
	PUGridCoordinates _anchorShiftOffset;

}

@property (assign,nonatomic) long long transitionSection;                      //@synthesize transitionSection=_transitionSection - In the implementation block
@property (nonatomic,retain) NSIndexSet * visualSections;                      //@synthesize visualSections=_visualSections - In the implementation block
@property (nonatomic,retain) NSArray * visualRowStartMarkers;                  //@synthesize visualRowStartMarkers=_visualRowStartMarkers - In the implementation block
@property (assign,nonatomic) long long contiguousRows;                         //@synthesize contiguousRows=_contiguousRows - In the implementation block
@property (nonatomic,retain) NSIndexPath * anchorRealPath;                     //@synthesize anchorRealPath=_anchorRealPath - In the implementation block
@property (assign,nonatomic) PUGridCoordinates anchorShiftOffset;              //@synthesize anchorShiftOffset=_anchorShiftOffset - In the implementation block
-(id)init;
-(id)description;
-(long long)transitionSection;
-(void)setTransitionSection:(long long)arg1 ;
-(NSIndexSet *)visualSections;
-(void)setVisualSections:(NSIndexSet *)arg1 ;
-(NSArray *)visualRowStartMarkers;
-(void)setVisualRowStartMarkers:(NSArray *)arg1 ;
-(long long)contiguousRows;
-(void)setContiguousRows:(long long)arg1 ;
-(NSIndexPath *)anchorRealPath;
-(void)setAnchorRealPath:(NSIndexPath *)arg1 ;
-(PUGridCoordinates)anchorShiftOffset;
-(void)setAnchorShiftOffset:(PUGridCoordinates)arg1 ;
@end


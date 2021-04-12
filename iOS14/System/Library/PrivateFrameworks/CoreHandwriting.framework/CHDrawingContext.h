/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHClassifiableDrawing;

@interface CHDrawingContext : NSObject {

	unsigned long long _edgeIndex;
	long long _numberOfSubstrokes;
	long long _numberOfSegments;
	CHClassifiableDrawing* _classifiableDrawing;
	set<long, std::__1::less<long>, std::__1::allocator<long> >* _strokeGroup;
	vector<long, std::__1::allocator<long> >* _delayedSegmentIDs;

}

@property (nonatomic,readonly) unsigned long long edgeIndex;                                    //@synthesize edgeIndex=_edgeIndex - In the implementation block
@property (nonatomic,readonly) long long numberOfSubstrokes;                                    //@synthesize numberOfSubstrokes=_numberOfSubstrokes - In the implementation block
@property (nonatomic,readonly) long long numberOfSegments;                                      //@synthesize numberOfSegments=_numberOfSegments - In the implementation block
@property (nonatomic,retain,readonly) CHClassifiableDrawing * classifiableDrawing;              //@synthesize classifiableDrawing=_classifiableDrawing - In the implementation block
@property (nonatomic,readonly) set<long strokeGroup;                                            //@synthesize strokeGroup=_strokeGroup - In the implementation block
@property (nonatomic,readonly) vector<long delayedSegmentIDs;                                   //@synthesize delayedSegmentIDs=_delayedSegmentIDs - In the implementation block
-(long long)numberOfSegments;
-(unsigned long long)edgeIndex;
-(void)dealloc;
-(CHClassifiableDrawing *)classifiableDrawing;
-(set<long)strokeGroup;
-(vector<long)delayedSegmentIDs;
-(long long)numberOfSubstrokes;
-(id)initWithEdgeIndex:(unsigned long long)arg1 numberOfSubstrokes:(long long)arg2 numberOfSegments:(long long)arg3 classifiableDrawing:(id)arg4 strokeGroup:(set<long, std::__1::less<long>, std::__1::allocator<long> >*)arg5 delayedSegmentIDs:(vector<long, std::__1::allocator<long> >*)arg6 ;
@end


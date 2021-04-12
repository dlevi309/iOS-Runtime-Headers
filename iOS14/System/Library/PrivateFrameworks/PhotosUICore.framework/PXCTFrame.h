/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSArray, PXCTFramesetter;

@interface PXCTFrame : NSObject {

	BOOL _prepared;
	BOOL _truncated;
	BOOL _allowTruncation;
	NSArray* _lines;
	const CTFrameRef _frame;
	unsigned long long _maximumLineCount;
	PXCTFramesetter* _framesetter;
	CGPoint _origin;

}

@property (nonatomic,readonly) const CTFrameRef frame;                            //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumLineCount;               //@synthesize maximumLineCount=_maximumLineCount - In the implementation block
@property (nonatomic,readonly) BOOL allowTruncation;                              //@synthesize allowTruncation=_allowTruncation - In the implementation block
@property (nonatomic,__weak,readonly) PXCTFramesetter * framesetter;              //@synthesize framesetter=_framesetter - In the implementation block
@property (nonatomic,readonly) CGPoint origin;                                    //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) NSArray * lines;                                   //@synthesize lines=_lines - In the implementation block
@property (getter=isTruncated,nonatomic,readonly) BOOL truncated;                 //@synthesize truncated=_truncated - In the implementation block
-(NSArray *)lines;
-(BOOL)isTruncated;
-(CGPoint)origin;
-(id)init;
-(const CTFrameRef)frame;
-(id)initWithFrame:(CTFrameRef)arg1 maximumLineCount:(unsigned long long)arg2 allowTruncation:(BOOL)arg3 framesetter:(id)arg4 ;
-(BOOL)allowTruncation;
-(unsigned long long)maximumLineCount;
-(BOOL)_truncateLine:(inout const _CTLine*)arg1 withOrigin:(inout CGPoint*)arg2 referenceAttributedString:(inout id*)arg3 bounds:(CGRect)arg4 ;
-(PXCTFramesetter *)framesetter;
-(void)prepare;
-(void)dealloc;
@end


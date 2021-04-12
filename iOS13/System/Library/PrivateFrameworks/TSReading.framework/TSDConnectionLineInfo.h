/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDShapeInfo.h>

@class TSDDrawableInfo;

@interface TSDConnectionLineInfo : TSDShapeInfo {

	TSDDrawableInfo* mConnectedFrom;
	TSDDrawableInfo* mConnectedTo;
	struct {
		unsigned connectedFrom : 1;
		unsigned connectedTo : 1;
	}  mInvalidFlags;

}

@property (nonatomic,retain) TSDDrawableInfo * connectedFrom; 
@property (nonatomic,retain) TSDDrawableInfo * connectedTo; 
-(void)dealloc;
-(Class)layoutClass;
-(void)didCopy;
-(id)copyWithContext:(id)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(Class)repClass;
-(id)presetKind;
-(void)performBlockWithTemporaryLayout:(/*^block*/id)arg1 ;
-(CGAffineTransform)computeLayoutFullTransform;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(BOOL)canAnchor;
-(TSDDrawableInfo *)connectedFrom;
-(TSDDrawableInfo *)connectedTo;
-(void)setConnectedFrom:(TSDDrawableInfo *)arg1 ;
-(void)setConnectedTo:(TSDDrawableInfo *)arg1 ;
-(void)computeLayoutInfoGeometry:(id*)arg1 andPathSource:(id*)arg2 ;
-(id)computeLayoutInfoGeometry;
@end


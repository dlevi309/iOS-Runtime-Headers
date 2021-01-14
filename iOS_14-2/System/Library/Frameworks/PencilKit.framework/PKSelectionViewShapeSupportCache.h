/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSArray;

@interface PKSelectionViewShapeSupportCache : NSObject {

	NSArray* _shapes;
	NSArray* _originalStrokes;
	long long _shapeType;

}

@property (nonatomic,retain) NSArray * shapes;                       //@synthesize shapes=_shapes - In the implementation block
@property (nonatomic,retain) NSArray * originalStrokes;              //@synthesize originalStrokes=_originalStrokes - In the implementation block
@property (assign,nonatomic) long long shapeType;                    //@synthesize shapeType=_shapeType - In the implementation block
-(NSArray *)shapes;
-(long long)shapeType;
-(void)setShapes:(NSArray *)arg1 ;
-(NSArray *)originalStrokes;
-(void)setOriginalStrokes:(NSArray *)arg1 ;
-(void)setShapeType:(long long)arg1 ;
@end


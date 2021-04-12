/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSWPColumn, TSWPShapeLayout;

@interface TSWPInteriorCookie : NSObject {

	TSWPColumn* _column;
	TSWPShapeLayout* _shapeLayout;

}

@property (assign,nonatomic) TSWPColumn * column;                   //@synthesize column=_column - In the implementation block
@property (assign,nonatomic) TSWPShapeLayout * layout;              //@synthesize shapeLayout=_shapeLayout - In the implementation block
-(TSWPShapeLayout *)layout;
-(void)setLayout:(TSWPShapeLayout *)arg1 ;
-(TSWPColumn *)column;
-(void)setColumn:(TSWPColumn *)arg1 ;
@end


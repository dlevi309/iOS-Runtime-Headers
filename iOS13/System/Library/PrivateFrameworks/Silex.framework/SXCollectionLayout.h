/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSArray;

@interface SXCollectionLayout : NSObject {

	double _spaceBetweenRows;
	NSArray* _rowsLayouts;

}

@property (assign,nonatomic) double spaceBetweenRows;              //@synthesize spaceBetweenRows=_spaceBetweenRows - In the implementation block
@property (nonatomic,retain) NSArray * rowsLayouts;                //@synthesize rowsLayouts=_rowsLayouts - In the implementation block
-(id)description;
-(NSArray *)rowsLayouts;
-(double)spaceBetweenRows;
-(void)setSpaceBetweenRows:(double)arg1 ;
-(void)setRowsLayouts:(NSArray *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


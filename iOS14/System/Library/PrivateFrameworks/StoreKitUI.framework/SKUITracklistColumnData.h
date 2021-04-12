/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSArray;

@interface SKUITracklistColumnData : NSObject {

	NSArray* _columns;
	double _interColumnSpacing;
	double _leftEdgeInset;
	double _rightEdgeInset;

}

@property (nonatomic,copy) NSArray * columns;                        //@synthesize columns=_columns - In the implementation block
@property (assign,nonatomic) double interColumnSpacing;              //@synthesize interColumnSpacing=_interColumnSpacing - In the implementation block
@property (assign,nonatomic) double leftEdgeInset;                   //@synthesize leftEdgeInset=_leftEdgeInset - In the implementation block
@property (assign,nonatomic) double rightEdgeInset;                  //@synthesize rightEdgeInset=_rightEdgeInset - In the implementation block
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(void)setInterColumnSpacing:(double)arg1 ;
-(double)interColumnSpacing;
-(id)_initSKUITracklistColumnData;
-(void)enumerateColumnsForTrack:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithRepresentativeTrack:(id)arg1 ;
-(void)adjustColumnsToFitWidth:(double)arg1 ;
-(id)columnForIdentifier:(long long)arg1 ;
-(void)enumerateColumnsForHeader:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)viewElementsForTrack:(id)arg1 columnIndex:(long long)arg2 ;
-(double)leftEdgeInset;
-(void)setLeftEdgeInset:(double)arg1 ;
-(double)rightEdgeInset;
-(void)setRightEdgeInset:(double)arg1 ;
@end


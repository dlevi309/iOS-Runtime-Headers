/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXDataTableDrawView.h>

@protocol SXDataTableViewDataSource, SXDataTableDataSource;
@class SXDataTableBlueprint, NSMutableDictionary;

@interface SXDataTableView : SXDataTableDrawView {

	id<SXDataTableViewDataSource> _viewDataSource;
	id<SXDataTableDataSource> _dataSource;
	SXDataTableBlueprint* _blueprint;
	NSMutableDictionary* _rowViews;
	NSMutableDictionary* _columnViews;

}

@property (nonatomic,retain) NSMutableDictionary * rowViews;                                     //@synthesize rowViews=_rowViews - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * columnViews;                                  //@synthesize columnViews=_columnViews - In the implementation block
@property (nonatomic,__weak,readonly) id<SXDataTableViewDataSource> viewDataSource;              //@synthesize viewDataSource=_viewDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SXDataTableDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) SXDataTableBlueprint * blueprint;                                   //@synthesize blueprint=_blueprint - In the implementation block
-(void)reset;
-(id)initWithDataSource:(id)arg1 ;
-(id<SXDataTableDataSource>)dataSource;
-(void)setDataSource:(id<SXDataTableDataSource>)arg1 ;
-(void)setRowViews:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)rowViews;
-(void)setBlueprint:(SXDataTableBlueprint *)arg1 ;
-(SXDataTableBlueprint *)blueprint;
-(CGPoint)originOffset;
-(NSRange)indexPathForPoint:(CGPoint)arg1 ;
-(void)layoutCellsForBlueprint:(id)arg1 ;
-(void)prepareDrawingForBlueprint:(id)arg1 ;
-(NSMutableDictionary *)columnViews;
-(void)setColumnViews:(NSMutableDictionary *)arg1 ;
-(id)viewForRowAtIndex:(unsigned long long)arg1 ;
-(id)viewForColumnAtIndex:(unsigned long long)arg1 ;
-(id<SXDataTableViewDataSource>)viewDataSource;
-(void)draw:(/*^block*/id)arg1 forIndexPath:(NSRange)arg2 ;
@end


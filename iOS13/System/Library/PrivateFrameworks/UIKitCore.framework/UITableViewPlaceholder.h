/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSIndexPath, NSString;

@interface UITableViewPlaceholder : NSObject {

	/*^block*/id _cellUpdateHandler;
	NSIndexPath* _insertionIndexPath;
	NSString* _reuseIdentifier;
	double _rowHeight;

}

@property (nonatomic,retain) NSIndexPath * insertionIndexPath;              //@synthesize insertionIndexPath=_insertionIndexPath - In the implementation block
@property (nonatomic,retain) NSString * reuseIdentifier;                    //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,nonatomic) double rowHeight;                              //@synthesize rowHeight=_rowHeight - In the implementation block
@property (nonatomic,copy) id cellUpdateHandler;                            //@synthesize cellUpdateHandler=_cellUpdateHandler - In the implementation block
-(double)rowHeight;
-(NSString *)reuseIdentifier;
-(void)setRowHeight:(double)arg1 ;
-(id)cellUpdateHandler;
-(void)setCellUpdateHandler:(id)arg1 ;
-(NSIndexPath *)insertionIndexPath;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(void)setInsertionIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 rowHeight:(double)arg3 ;
@end


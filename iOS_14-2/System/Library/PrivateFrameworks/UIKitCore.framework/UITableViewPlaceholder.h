/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRowHeight:(double)arg1 ;
-(double)rowHeight;
-(id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 rowHeight:(double)arg3 ;
-(id)cellUpdateHandler;
-(void)setCellUpdateHandler:(id)arg1 ;
-(void)setInsertionIndexPath:(NSIndexPath *)arg1 ;
-(NSString *)reuseIdentifier;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(NSIndexPath *)insertionIndexPath;
@end


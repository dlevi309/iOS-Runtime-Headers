/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSIndexPath, NSString;

@interface UICollectionViewPlaceholder : NSObject {

	NSIndexPath* _insertionIndexPath;
	NSString* _cellReuseIdentifier;
	/*^block*/id _cellUpdateHandler;

}

@property (nonatomic,retain) NSIndexPath * insertionIndexPath;              //@synthesize insertionIndexPath=_insertionIndexPath - In the implementation block
@property (nonatomic,copy) NSString * cellReuseIdentifier;                  //@synthesize cellReuseIdentifier=_cellReuseIdentifier - In the implementation block
@property (nonatomic,copy) id cellUpdateHandler;                            //@synthesize cellUpdateHandler=_cellUpdateHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cellUpdateHandler;
-(id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setCellUpdateHandler:(id)arg1 ;
-(NSIndexPath *)insertionIndexPath;
-(NSString *)cellReuseIdentifier;
-(void)setInsertionIndexPath:(NSIndexPath *)arg1 ;
-(void)setCellReuseIdentifier:(NSString *)arg1 ;
@end


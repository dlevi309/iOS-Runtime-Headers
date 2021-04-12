/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)cellReuseIdentifier;
-(id)cellUpdateHandler;
-(id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setCellUpdateHandler:(id)arg1 ;
-(void)setInsertionIndexPath:(NSIndexPath *)arg1 ;
-(void)setCellReuseIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSIndexPath *)insertionIndexPath;
@end


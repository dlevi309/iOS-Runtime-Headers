/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSMutableArray, NSArray;

@interface TextColumn : NSObject {

	NSMutableArray* _mutableRows;

}

@property (nonatomic,retain) NSMutableArray * mutableRows;              //@synthesize mutableRows=_mutableRows - In the implementation block
@property (nonatomic,retain,readonly) NSArray * rows; 
@property (readonly) unsigned long long rowCount; 
-(id)init;
-(unsigned long long)rowCount;
-(NSArray *)rows;
-(id)initWithRows:(id)arg1 ;
-(void)addRow:(id)arg1 ;
-(void)setMutableRows:(NSMutableArray *)arg1 ;
-(void)sortRowsInAscendingOrder;
-(NSMutableArray *)mutableRows;
@end


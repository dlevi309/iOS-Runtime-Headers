/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)rows;
-(void)addRow:(id)arg1 ;
-(unsigned long long)rowCount;
-(id)initWithRows:(id)arg1 ;
-(void)setMutableRows:(NSMutableArray *)arg1 ;
-(void)sortRowsInAscendingOrder;
-(NSMutableArray *)mutableRows;
@end


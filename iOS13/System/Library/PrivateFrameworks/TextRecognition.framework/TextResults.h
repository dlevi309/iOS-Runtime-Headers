/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSArray, NSMutableArray;

@interface TextResults : NSObject {

	NSArray* _cols;
	NSMutableArray* _mutableCols;

}

@property (nonatomic,retain) NSMutableArray * mutableCols;              //@synthesize mutableCols=_mutableCols - In the implementation block
@property (nonatomic,retain) NSArray * cols;                            //@synthesize cols=_cols - In the implementation block
@property (readonly) unsigned long long colCount; 
-(id)init;
-(unsigned long long)colCount;
-(NSArray *)cols;
-(void)setCols:(NSArray *)arg1 ;
-(void)addColumn:(id)arg1 ;
-(void)sortCols;
-(id)transcriptionOfPath:(id)arg1 tokenProcessingBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)mutableCols;
-(void)setMutableCols:(NSMutableArray *)arg1 ;
@end


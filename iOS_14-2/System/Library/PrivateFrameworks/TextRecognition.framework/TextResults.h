/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)cols;
-(id)init;
-(void)addColumn:(id)arg1 ;
-(unsigned long long)colCount;
-(void)setCols:(NSArray *)arg1 ;
-(void)sortCols;
-(id)transcriptionOfPath:(id)arg1 tokenProcessingBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)mutableCols;
-(void)setMutableCols:(NSMutableArray *)arg1 ;
@end


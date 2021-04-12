/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/


@class NSString, NSArray, TIKeyboardCandidate, TIMecabraSegment, NSMutableArray;

@interface TILiveConversionSegments : NSObject {

	unsigned _inputIndex;
	unsigned long long _index;
	NSString* _rawInputString;
	NSString* _inputString;
	NSString* _autoCommitString;
	NSArray* _segmentRanges;
	TIKeyboardCandidate* _currentCandidate;
	TIMecabraSegment* _currentSegment;
	NSMutableArray* _rawSegments;

}

@property (assign,nonatomic) unsigned long long index;                          //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) unsigned inputIndex;                               //@synthesize inputIndex=_inputIndex - In the implementation block
@property (nonatomic,copy) NSString * rawInputString;                           //@synthesize rawInputString=_rawInputString - In the implementation block
@property (nonatomic,copy) NSString * inputString;                              //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,copy) NSString * autoCommitString;                         //@synthesize autoCommitString=_autoCommitString - In the implementation block
@property (nonatomic,copy) NSArray * segmentRanges;                             //@synthesize segmentRanges=_segmentRanges - In the implementation block
@property (nonatomic,copy) TIKeyboardCandidate * currentCandidate;              //@synthesize currentCandidate=_currentCandidate - In the implementation block
@property (nonatomic,retain) TIMecabraSegment * currentSegment;                 //@synthesize currentSegment=_currentSegment - In the implementation block
@property (nonatomic,retain) NSMutableArray * rawSegments;                      //@synthesize rawSegments=_rawSegments - In the implementation block
-(unsigned long long)index;
-(void)commit;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setCurrentCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardCandidate *)currentCandidate;
-(NSString *)inputString;
-(unsigned)inputIndex;
-(void)setInputIndex:(unsigned)arg1 ;
-(void)setInputString:(NSString *)arg1 ;
-(void)setCurrentSegment:(TIMecabraSegment *)arg1 ;
-(NSMutableArray *)rawSegments;
-(TIMecabraSegment *)currentSegment;
-(NSString *)rawInputString;
-(void)setPhraseBoundary:(unsigned long long)arg1 ;
-(BOOL)didAccept;
-(void)buildMarkedText;
-(void)setRawInputString:(NSString *)arg1 ;
-(void)setAutoCommitString:(NSString *)arg1 ;
-(void)setSegmentRanges:(NSArray *)arg1 ;
-(id)initWithSegments:(id)arg1 at:(unsigned long long)arg2 ;
-(BOOL)canMove:(BOOL)arg1 ;
-(void)move:(BOOL)arg1 ;
-(void)didUpdateCandidate:(id)arg1 with:(id)arg2 ;
-(NSString *)autoCommitString;
-(NSArray *)segmentRanges;
-(void)setRawSegments:(NSMutableArray *)arg1 ;
@end


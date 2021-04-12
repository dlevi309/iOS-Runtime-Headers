/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
*/


@class NSString;

@interface PDBucket : NSObject {

	BOOL _hasInclusiveUpperBound;
	double _lowerInclusiveBound;
	double _upperBound;
	unsigned long long _count;
	NSString* _label;

}

@property (assign,nonatomic) double lowerInclusiveBound; 
@property (assign,nonatomic) double upperBound; 
@property (assign,nonatomic) BOOL hasInclusiveUpperBound; 
@property (assign,nonatomic) unsigned long long count; 
@property (nonatomic,retain) NSString * label; 
@property (assign,nonatomic) double lowerInclusiveBound;               //@synthesize lowerInclusiveBound=_lowerInclusiveBound - In the implementation block
@property (assign,nonatomic) double upperBound;                        //@synthesize upperBound=_upperBound - In the implementation block
@property (assign,nonatomic) BOOL hasInclusiveUpperBound;              //@synthesize hasInclusiveUpperBound=_hasInclusiveUpperBound - In the implementation block
@property (assign,nonatomic) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSString * label;                         //@synthesize label=_label - In the implementation block
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(double)upperBound;
-(void)setUpperBound:(double)arg1 ;
-(void)setLowerInclusiveBound:(double)arg1 ;
-(double)lowerInclusiveBound;
-(void)setHasInclusiveUpperBound:(BOOL)arg1 ;
-(BOOL)hasInclusiveUpperBound;
@end


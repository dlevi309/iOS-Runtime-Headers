/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCount:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)count;
-(void)setLabel:(NSString *)arg1 ;
-(double)upperBound;
-(NSString *)label;
-(void)setUpperBound:(double)arg1 ;
-(void)setLowerInclusiveBound:(double)arg1 ;
-(double)lowerInclusiveBound;
-(void)setHasInclusiveUpperBound:(BOOL)arg1 ;
-(BOOL)hasInclusiveUpperBound;
@end


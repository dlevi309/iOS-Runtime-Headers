/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class NSMutableString, NSMutableArray;

@interface GKScoreParser : NSObject {

	BOOL _error;
	NSMutableString* _prefix;
	NSMutableString* _suffix;
	NSMutableArray* _numericSeparators;
	long long _colonCount;
	long long _precision;

}

@property (nonatomic,retain) NSMutableString * prefix;                        //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,retain) NSMutableString * suffix;                        //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,retain) NSMutableArray * numericSeparators;              //@synthesize numericSeparators=_numericSeparators - In the implementation block
@property (assign,nonatomic) long long colonCount;                            //@synthesize colonCount=_colonCount - In the implementation block
@property (assign,nonatomic) long long precision;                             //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) BOOL error;                                      //@synthesize error=_error - In the implementation block
+(id)formattedDifferenceBetweenFirstScore:(id)arg1 secondScore:(id)arg2 ;
-(long long)precision;
-(void)setPrecision:(long long)arg1 ;
-(NSMutableString *)prefix;
-(NSMutableString *)suffix;
-(void)setError:(BOOL)arg1 ;
-(BOOL)error;
-(void)setPrefix:(NSMutableString *)arg1 ;
-(void)setSuffix:(NSMutableString *)arg1 ;
-(void)setNumericSeparators:(NSMutableArray *)arg1 ;
-(long long)colonCount;
-(void)setColonCount:(long long)arg1 ;
-(NSMutableArray *)numericSeparators;
-(void)parseScore:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSString;

@interface TSKSearch : NSObject {

	BOOL _isComplete;
	NSString* _string;
	unsigned long long _options;
	/*^block*/id _hitBlock;

}

@property (nonatomic,copy) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id hitBlock;                               //@synthesize hitBlock=_hitBlock - In the implementation block
@property (assign,nonatomic) BOOL isComplete;                         //@synthesize isComplete=_isComplete - In the implementation block
-(NSString *)string;
-(void)dealloc;
-(unsigned long long)options;
-(void)setString:(NSString *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)isComplete;
-(void)setIsComplete:(BOOL)arg1 ;
-(void)setHitBlock:(id)arg1 ;
-(id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3 ;
-(id)hitBlock;
@end


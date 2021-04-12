/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@class NSString;

@interface MapsSuggestionsTrafficAndETAResult : NSObject {

	BOOL _isSuccess;
	double _seconds;
	NSString* _shortTrafficString;
	NSString* _longTrafficString;

}

@property (assign,nonatomic) BOOL isSuccess;                           //@synthesize isSuccess=_isSuccess - In the implementation block
@property (assign,nonatomic) double seconds;                           //@synthesize seconds=_seconds - In the implementation block
@property (nonatomic,copy) NSString * shortTrafficString;              //@synthesize shortTrafficString=_shortTrafficString - In the implementation block
@property (nonatomic,copy) NSString * longTrafficString;               //@synthesize longTrafficString=_longTrafficString - In the implementation block
-(double)seconds;
-(void)setSeconds:(double)arg1 ;
-(BOOL)isSuccess;
-(void)setIsSuccess:(BOOL)arg1 ;
-(NSString *)shortTrafficString;
-(void)setShortTrafficString:(NSString *)arg1 ;
-(NSString *)longTrafficString;
-(void)setLongTrafficString:(NSString *)arg1 ;
-(id)initWithGEOTrafficAndETAResult:(id)arg1 ;
@end


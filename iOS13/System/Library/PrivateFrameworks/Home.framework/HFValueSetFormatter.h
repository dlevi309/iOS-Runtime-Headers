/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSFormatter.h>

@interface HFValueSetFormatter : NSFormatter {

	long long _unitStyle;
	/*^block*/id _stringProvider;

}

@property (nonatomic,copy) id stringProvider;                  //@synthesize stringProvider=_stringProvider - In the implementation block
@property (assign,nonatomic) long long unitStyle;              //@synthesize unitStyle=_unitStyle - In the implementation block
+(id)formatterWithStringProvider:(/*^block*/id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setUnitStyle:(long long)arg1 ;
-(long long)unitStyle;
-(id)initWithStringProvider:(/*^block*/id)arg1 ;
-(void)setStringProvider:(id)arg1 ;
-(id)stringProvider;
@end


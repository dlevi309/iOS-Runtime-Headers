/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/Stocks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCWatchedStock : NSObject <NSCopying> {

	NSString* _name;
	NSString* _shortName;
	NSString* _symbol;
	NSString* _exchange;
	NSString* _displaySymbol;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                  //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * symbol;                     //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,copy,readonly) NSString * exchange;                   //@synthesize exchange=_exchange - In the implementation block
@property (nonatomic,copy,readonly) NSString * displaySymbol;              //@synthesize displaySymbol=_displaySymbol - In the implementation block
+(id)watchedStockWithSymbol:(id)arg1 name:(id)arg2 exchange:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)symbol;
-(NSString *)displaySymbol;
-(NSString *)shortName;
-(NSString *)exchange;
-(id)initWithName:(id)arg1 shortName:(id)arg2 symbol:(id)arg3 exchange:(id)arg4 displaySymbol:(id)arg5 ;
-(id)initWithName:(id)arg1 shortName:(id)arg2 symbol:(id)arg3 exchange:(id)arg4 ;
@end


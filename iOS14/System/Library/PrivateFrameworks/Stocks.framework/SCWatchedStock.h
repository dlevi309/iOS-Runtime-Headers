/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)shortName;
-(NSString *)name;
-(id)description;
-(NSString *)symbol;
-(NSString *)displaySymbol;
-(unsigned long long)hash;
-(NSString *)exchange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithName:(id)arg1 shortName:(id)arg2 symbol:(id)arg3 exchange:(id)arg4 displaySymbol:(id)arg5 ;
-(id)initWithName:(id)arg1 shortName:(id)arg2 symbol:(id)arg3 exchange:(id)arg4 ;
@end


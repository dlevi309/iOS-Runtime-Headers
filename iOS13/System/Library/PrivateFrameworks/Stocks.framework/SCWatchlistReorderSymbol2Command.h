/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKZoneCommand.h>

@class NSString;

@interface SCWatchlistReorderSymbol2Command : NSObject <SCKZoneCommand> {

	NSString* _symbol;
	unsigned long long _toIndex;

}

@property (nonatomic,copy,readonly) NSString * symbol;                  //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,readonly) unsigned long long toIndex;              //@synthesize toIndex=_toIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)symbol;
-(unsigned long long)toIndex;
-(id)initWithSymbol:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)executeWithZone:(id)arg1 ;
@end


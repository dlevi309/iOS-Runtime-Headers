/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)toIndex;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithZone:(id)arg1 ;
-(NSString *)symbol;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSymbol:(id)arg1 toIndex:(unsigned long long)arg2 ;
@end


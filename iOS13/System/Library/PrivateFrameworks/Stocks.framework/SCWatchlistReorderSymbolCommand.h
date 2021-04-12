/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKZoneCommand.h>

@class NSString;

@interface SCWatchlistReorderSymbolCommand : NSObject <SCKZoneCommand> {

	NSString* _symbol;
	NSString* _precedingSymbol;

}

@property (nonatomic,copy,readonly) NSString * symbol;                       //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,copy,readonly) NSString * precedingSymbol;              //@synthesize precedingSymbol=_precedingSymbol - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)symbol;
-(id)initWithSymbol:(id)arg1 precedingSymbol:(id)arg2 ;
-(void)executeWithZone:(id)arg1 ;
-(NSString *)precedingSymbol;
@end


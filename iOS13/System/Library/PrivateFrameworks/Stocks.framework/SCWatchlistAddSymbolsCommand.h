/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKZoneCommand.h>

@class NSArray, NSString;

@interface SCWatchlistAddSymbolsCommand : NSObject <SCKZoneCommand> {

	NSArray* _symbols;

}

@property (nonatomic,copy,readonly) NSArray * symbols;              //@synthesize symbols=_symbols - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSymbols:(id)arg1 ;
-(void)executeWithZone:(id)arg1 ;
-(NSArray *)symbols;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKZoneCommand.h>

@class NSString;

@interface SCWatchlistReplaceSymbolCommand : NSObject <SCKZoneCommand> {

	NSString* _oldSymbol;
	NSString* _replacementSymbol;

}

@property (nonatomic,copy,readonly) NSString * oldSymbol;                      //@synthesize oldSymbol=_oldSymbol - In the implementation block
@property (nonatomic,copy,readonly) NSString * replacementSymbol;              //@synthesize replacementSymbol=_replacementSymbol - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithOldSymbol:(id)arg1 replacementSymbol:(id)arg2 ;
-(void)executeWithZone:(id)arg1 ;
-(NSString *)oldSymbol;
-(NSString *)replacementSymbol;
@end


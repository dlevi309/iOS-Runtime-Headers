/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)executeWithZone:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithOldSymbol:(id)arg1 replacementSymbol:(id)arg2 ;
-(NSString *)oldSymbol;
-(NSString *)replacementSymbol;
@end


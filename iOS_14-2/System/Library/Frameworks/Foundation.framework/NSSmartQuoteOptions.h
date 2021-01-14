/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSSmartQuoteOptions : NSObject <NSCopying, NSSecureCoding> {

	NSString* _leftSingleQuote;
	NSString* _rightSingleQuote;
	NSString* _apostrophe;
	NSString* _leftDoubleQuote;
	NSString* _rightDoubleQuote;

}

@property (copy,readonly) NSString * leftSingleQuote; 
@property (copy,readonly) NSString * rightSingleQuote; 
@property (copy,readonly) NSString * apostrophe; 
@property (copy,readonly) NSString * leftDoubleQuote; 
@property (copy,readonly) NSString * rightDoubleQuote; 
+(BOOL)supportsSecureCoding;
+(id)smartQuoteOptionsForLocale:(id)arg1 ;
-(id)initWithLeftSingleQuote:(id)arg1 rightSingleQuote:(id)arg2 apostrophe:(id)arg3 leftDoubleQuote:(id)arg4 rightDoubleQuote:(id)arg5 ;
-(NSString *)rightDoubleQuote;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)apostrophe;
-(NSString *)rightSingleQuote;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)leftDoubleQuote;
-(NSString *)leftSingleQuote;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


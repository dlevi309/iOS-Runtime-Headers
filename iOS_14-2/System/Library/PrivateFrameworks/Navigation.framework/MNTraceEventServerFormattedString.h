/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/GEOServerFormattedString.h>

@protocol GEOServerConditionalString;
@class NSArray, NSString;

@interface MNTraceEventServerFormattedString : NSObject <GEOServerFormattedString> {

	NSArray* _formatStrings;
	NSArray* _formatTokens;
	NSArray* _separators;
	NSArray* _formatStyles;
	id<GEOServerConditionalString> _alternativeString;

}

@property (nonatomic,readonly) NSArray * formatStrings;                                       //@synthesize formatStrings=_formatStrings - In the implementation block
@property (nonatomic,readonly) NSArray * formatTokens;                                        //@synthesize formatTokens=_formatTokens - In the implementation block
@property (nonatomic,readonly) NSArray * separators;                                          //@synthesize separators=_separators - In the implementation block
@property (nonatomic,readonly) NSArray * formatStyles;                                        //@synthesize formatStyles=_formatStyles - In the implementation block
@property (nonatomic,readonly) id<GEOServerConditionalString> alternativeString;              //@synthesize alternativeString=_alternativeString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)formatStrings;
-(NSArray *)formatTokens;
-(id<GEOServerConditionalString>)alternativeString;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)formatStyles;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)separators;
-(id)initWithFormatStrings:(id)arg1 formatTokens:(id)arg2 separators:(id)arg3 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitFontStyling.h>
#import <libobjc.A.dylib/EQKitLayoutSchemataToken.h>

@class NSString;

@interface EQKitMathMLMToken : EQKitMathMLNode <EQKitMathMLNode, EQKitFontStyling, EQKitLayoutSchemataToken> {

	struct {
		unsigned mType : 2;
	}  mFlags;
	SCD_Union_EQ17 mContent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isNumber;
-(id)initWithContent:(id)arg1 ;
-(id)schemataTokenString;
-(unsigned)schemataUnicharOrNul;
-(id)initWithString:(id)arg1 environment:(id)arg2 ;
-(int)scriptContext;
-(int)scriptVariant;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >*)mathMLAttributes;
-(id)schemataFontStyling;
-(id)fontStyling;
@end


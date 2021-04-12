/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitLayoutSchemataText.h>
#import <libobjc.A.dylib/EQKitFontStyling.h>

@class EQKitMathMLTokenContent, NSString;

@interface EQKitMathMLMText : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataText, EQKitFontStyling> {

	EQKitMathMLTokenContent* mContent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithContent:(id)arg1 ;
-(BOOL)isBaseFontNameUsed;
-(Schemata*)layoutSchemata;
-(BOOL)schemataIsQuoted;
-(id)schemataChildren;
-(int)scriptContext;
-(int)scriptVariant;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >Ref)mathMLAttributes;
@end


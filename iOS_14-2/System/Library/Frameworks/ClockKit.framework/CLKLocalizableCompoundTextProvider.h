/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSArray, NSString;

@interface CLKLocalizableCompoundTextProvider : CLKTextProvider {

	NSArray* _textProviders;
	NSString* _formatKey;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_validate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_arrayOfTextProviderJSONObjectRepresentations;
-(id)initWithFormatKey:(id)arg1 textProviders:(id)arg2 ;
-(id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2 ;
-(id)_localizedStringForKey:(id)arg1 withBundle:(id)arg2 forLocalization:(id)arg3 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSArray, NSString;

@interface CLKLocalizableCompoundTextProvider : CLKTextProvider {

	NSArray* _textProviders;
	NSString* _formatKey;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_validate;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)_arrayOfTextProviderJSONObjectRepresentations;
-(id)initWithFormatKey:(id)arg1 textProviders:(id)arg2 ;
-(id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2 ;
-(id)_localizedStringForKey:(id)arg1 withBundle:(id)arg2 forLocalization:(id)arg3 ;
@end


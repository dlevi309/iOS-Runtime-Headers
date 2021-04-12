/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSMutableArray, NSString;

@interface CLKCompoundTextProvider : CLKTextProvider {

	NSMutableArray* _textProviders;
	NSMutableArray* _segments;
	NSString* _sessionCacheKey;

}
+(BOOL)supportsSecureCoding;
+(id)compoundProviderWithLocalizedFormat:(id)arg1 localizedTextProviders:(id)arg2 ;
+(id)compoundTextProviderCurrentlyFormattingOnThisThread;
-(id)initWithFormat:(id)arg1 arguments:(char*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_validate;
-(id)description;
-(void)_endSession;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_startSessionWithDate:(id)arg1 ;
-(long long)_updateFrequency;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)timeTravelUpdateFrequency;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(void)_processFormat:(id)arg1 arguments:(char*)arg2 ;
-(id)initWithSegments:(id)arg1 textProviders:(id)arg2 ;
-(id)_sessionCacheKey;
-(id)_attributedStringForSegment:(id)arg1 withStyle:(id)arg2 ;
-(id)_replacementForTextProvider:(id)arg1 index:(unsigned long long)arg2 withStyle:(id)arg3 ;
-(id)_arrayOfTextProviderJSONObjectRepresentations;
-(void)addTextProvider:(id)arg1 andGetPlaceholderString:(id*)arg2 ;
@end


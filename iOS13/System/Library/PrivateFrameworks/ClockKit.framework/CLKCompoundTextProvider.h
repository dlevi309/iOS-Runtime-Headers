/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_validate;
-(void)_endSession;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(long long)timeTravelUpdateFrequency;
-(void)_processFormat:(id)arg1 arguments:(char*)arg2 ;
-(id)initWithSegments:(id)arg1 textProviders:(id)arg2 ;
-(void)_startSessionWithDate:(id)arg1 ;
-(id)_sessionCacheKey;
-(id)_attributedStringForSegment:(id)arg1 withStyle:(id)arg2 ;
-(id)_replacementForTextProvider:(id)arg1 index:(unsigned long long)arg2 withStyle:(id)arg3 ;
-(long long)_updateFrequency;
-(id)_arrayOfTextProviderJSONObjectRepresentations;
-(void)addTextProvider:(id)arg1 andGetPlaceholderString:(id*)arg2 ;
@end


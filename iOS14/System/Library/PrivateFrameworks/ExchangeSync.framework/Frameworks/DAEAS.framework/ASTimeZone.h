/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/DAEAS-Structs.h>
#import <CoreFoundation/NSTimeZone.h>
#import <libobjc.A.dylib/ASParsingLeafNode.h>

@class NSTimeZone;

@interface ASTimeZone : NSTimeZone <ASParsingLeafNode> {

	int _gmtOffset;
	int _dstOffset;
	SYSTEMTIME* _standardDate;
	SYSTEMTIME* _daylightDate;
	NSTimeZone* _wrappedTimeZone;

}
+(id)gmt;
+(BOOL)expectsContent;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)_dateIsValidTransitionDate:(id)arg1 inYear:(int)arg2 withTimeZone:(id)arg3 ;
+(void)_fillOutCurrentTimeZoneInfo;
+(void)_cacheTimeZoneInfo;
+(id)_tzCachePathCreateIfMissing:(BOOL)arg1 ;
+(id)_curTZDataVersion;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)data;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
-(void)dealloc;
-(int)parsingState;
-(id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6 ;
-(id)dateForRule:(SYSTEMTIME*)arg1 inYear:(long long)arg2 ;
-(id)_bestGuessAtOlsonTimeZoneForOffsetInMinutes:(int)arg1 daylightBiasInMinutes:(int)arg2 standardTransitionDate:(SYSTEMTIME*)arg3 daylightTransitionDate:(SYSTEMTIME*)arg4 ;
-(BOOL)_dateIsValidTransitionDate:(id)arg1 inYear:(long long)arg2 outDaylightBias:(long long*)arg3 ;
-(SYSTEMTIME)_ruleForDate:(id)arg1 ;
-(id)initWithTZNameFromCalDB:(id)arg1 ;
-(SCD_Struct_AS5*)mallocTZIForDate:(id)arg1 ;
-(id)initWithCodingDict:(id)arg1 ;
-(id)dictForCoding;
@end


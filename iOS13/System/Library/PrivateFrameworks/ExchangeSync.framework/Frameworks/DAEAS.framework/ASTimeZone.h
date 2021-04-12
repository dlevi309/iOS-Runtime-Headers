/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)_cacheTimeZoneInfo;
+(BOOL)expectsContent;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)gmt;
+(BOOL)_dateIsValidTransitionDate:(id)arg1 inYear:(int)arg2 withTimeZone:(id)arg3 ;
+(void)_fillOutCurrentTimeZoneInfo;
+(id)_tzCachePathCreateIfMissing:(BOOL)arg1 ;
+(id)_curTZDataVersion;
-(void)dealloc;
-(id)description;
-(id)name;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(id)data;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
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


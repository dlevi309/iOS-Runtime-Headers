/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSURL, NSString;

@interface DDScannerResult : NSObject <NSSecureCoding> {

	_DDResult* _coreResult;
	NSArray* _subResultsCache;
	NSURL* _cachedURL;
	BOOL _hasCachedURL;

}

@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) NSString * matchedString; 
@property (nonatomic,readonly) NSRange urlificationRange; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int category; 
@property (nonatomic,readonly) NSURL * url; 
@property (assign) NSRange range; 
+(BOOL)supportsSecureCoding;
+(id)resultsFromCoreResults:(CFArrayRef)arg1 ;
+(id)resultFromCoreResult:(_DDResult*)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(id)init;
-(NSRange)range;
-(long long)score;
-(id)location;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(int)category;
-(void)setType:(NSString *)arg1 ;
-(NSURL *)url;
-(id)rawValue;
-(SCD_Struct_DD1)cfRange;
-(BOOL)typeIs:(CFStringRef)arg1 ;
-(id)description;
-(NSString *)matchedString;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(id)subResults;
-(_DDResult*)coreResult;
-(void)offsetRangeBy:(long long)arg1 ;
-(id)initWithCoreResult:(_DDResult*)arg1 ;
-(NSRange)urlificationRange;
-(id)contextualData;
-(void)setSubResults:(id)arg1 ;
-(double)getDuration;
-(BOOL)getMailValue:(id*)arg1 label:(id*)arg2 ;
-(id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id*)arg3 allDayRef:(BOOL*)arg4 ;
-(BOOL)extractStartDate:(id*)arg1 startTimezone:(id*)arg2 endDate:(id*)arg3 endTimezone:(id*)arg4 allDayRef:(BOOL*)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7 ;
-(BOOL)getPhoneValue:(id*)arg1 label:(id*)arg2 ;
-(BOOL)getIMScreenNameValue:(id*)arg1 type:(id*)arg2 ;
-(BOOL)getStreet:(id*)arg1 city:(id*)arg2 state:(id*)arg3 zip:(id*)arg4 country:(id*)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end


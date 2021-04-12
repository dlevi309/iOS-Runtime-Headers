/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)resultFromCoreResult:(_DDResult*)arg1 ;
+(id)resultsFromCoreResults:(CFArrayRef)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)category;
-(NSString *)value;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSURL *)url;
-(NSRange)range;
-(long long)score;
-(id)location;
-(id)rawValue;
-(void)setRange:(NSRange)arg1 ;
-(_DDResult*)coreResult;
-(NSString *)matchedString;
-(id)subResults;
-(NSRange)urlificationRange;
-(void)offsetRangeBy:(long long)arg1 ;
-(id)initWithCoreResult:(_DDResult*)arg1 ;
-(SCD_Struct_DD1)cfRange;
-(BOOL)typeIs:(CFStringRef)arg1 ;
-(id)contextualData;
-(void)setSubResults:(id)arg1 ;
-(double)getDuration;
-(id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id*)arg3 allDayRef:(BOOL*)arg4 ;
-(BOOL)extractStartDate:(id*)arg1 startTimezone:(id*)arg2 endDate:(id*)arg3 endTimezone:(id*)arg4 allDayRef:(BOOL*)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7 ;
-(BOOL)getPhoneValue:(id*)arg1 label:(id*)arg2 ;
-(BOOL)getMailValue:(id*)arg1 label:(id*)arg2 ;
-(BOOL)getIMScreenNameValue:(id*)arg1 type:(id*)arg2 ;
-(BOOL)getStreet:(id*)arg1 city:(id*)arg2 state:(id*)arg3 zip:(id*)arg4 country:(id*)arg5 ;
@end


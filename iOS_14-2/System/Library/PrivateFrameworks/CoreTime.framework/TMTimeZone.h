/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreTime.framework/CoreTime
*/


@class NSString;

@interface TMTimeZone : NSObject {

	NSString* _source;
	NSString* _olsonName;

}

@property (copy) NSString * source;                 //@synthesize source=_source - In the implementation block
@property (copy) NSString * olsonName;              //@synthesize olsonName=_olsonName - In the implementation block
+(id)timeZoneWithOlsonName:(id)arg1 fromSource:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)source;
-(void)setOlsonName:(NSString *)arg1 ;
-(id)initWithOlsonName:(id)arg1 fromSource:(id)arg2 ;
-(NSString *)olsonName;
-(BOOL)hasSameOlsonNameAs:(id)arg1 ;
@end


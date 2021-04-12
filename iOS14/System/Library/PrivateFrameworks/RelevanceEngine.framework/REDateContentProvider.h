/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate, NSTimeZone;

@interface REDateContentProvider : RETextContentProvider {

	NSDate* _date;
	unsigned long long _units;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long units;              //@synthesize units=_units - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;                 //@synthesize timeZone=_timeZone - In the implementation block
+(id)dateContentProviderWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3 ;
-(unsigned long long)units;
-(NSTimeZone *)timeZone;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3 ;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
@end


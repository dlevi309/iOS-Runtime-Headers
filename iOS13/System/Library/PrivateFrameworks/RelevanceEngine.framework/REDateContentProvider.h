/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(unsigned long long)units;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(id)initWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate, NSTimeZone;

@interface RETimeIntervalContentProvider : RETextContentProvider {

	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
+(id)timeIntervalContentProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 ;
@end


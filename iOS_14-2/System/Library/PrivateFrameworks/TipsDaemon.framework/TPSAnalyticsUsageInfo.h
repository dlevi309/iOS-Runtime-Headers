/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/


@class NSDate, NSPredicate, NSString;

@interface TPSAnalyticsUsageInfo : NSObject {

	NSDate* _firstShownDate;
	NSPredicate* _usagePredicate;
	NSString* _usageStream;
	NSString* _identifier;
	unsigned long long _desiredOutcomeCount;

}

@property (nonatomic,retain) NSDate * firstShownDate;                             //@synthesize firstShownDate=_firstShownDate - In the implementation block
@property (nonatomic,retain) NSPredicate * usagePredicate;                        //@synthesize usagePredicate=_usagePredicate - In the implementation block
@property (nonatomic,copy) NSString * usageStream;                                //@synthesize usageStream=_usageStream - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long desiredOutcomeCount;              //@synthesize desiredOutcomeCount=_desiredOutcomeCount - In the implementation block
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSDate *)firstShownDate;
-(unsigned long long)desiredOutcomeCount;
-(void)setFirstShownDate:(NSDate *)arg1 ;
-(void)setUsagePredicate:(NSPredicate *)arg1 ;
-(void)setUsageStream:(NSString *)arg1 ;
-(void)setDesiredOutcomeCount:(unsigned long long)arg1 ;
-(NSPredicate *)usagePredicate;
-(NSString *)usageStream;
@end


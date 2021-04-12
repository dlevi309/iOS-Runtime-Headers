/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/


@class NSArray, NSString;

@interface CDBABCReporter : NSObject {

	BOOL _ignoreRateLimiting;
	NSArray* _events;
	NSString* _subtype;
	NSString* _subtypeContext;

}

@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,retain) NSString * subtype;                     //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,retain) NSString * subtypeContext;              //@synthesize subtypeContext=_subtypeContext - In the implementation block
@property (nonatomic,retain) NSArray * events;                       //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL ignoreRateLimiting;                //@synthesize ignoreRateLimiting=_ignoreRateLimiting - In the implementation block
-(NSString *)subtype;
-(void)setEvents:(NSArray *)arg1 ;
-(void)report;
-(NSString *)domain;
-(id)initWithSubtype:(id)arg1 context:(id)arg2 ;
-(void)setIgnoreRateLimiting:(BOOL)arg1 ;
-(NSString *)type;
-(void)setSubtypeContext:(NSString *)arg1 ;
-(BOOL)rateLimitingAllowsABCReport;
-(NSString *)subtypeContext;
-(BOOL)ignoreRateLimiting;
-(NSArray *)events;
-(void)setSubtype:(NSString *)arg1 ;
@end


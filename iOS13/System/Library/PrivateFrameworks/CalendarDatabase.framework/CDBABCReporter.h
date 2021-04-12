/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)domain;
-(NSString *)type;
-(NSString *)subtype;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(void)report;
-(void)setSubtype:(NSString *)arg1 ;
-(id)initWithSubtype:(id)arg1 context:(id)arg2 ;
-(void)setIgnoreRateLimiting:(BOOL)arg1 ;
-(void)setSubtypeContext:(NSString *)arg1 ;
-(BOOL)rateLimitingAllowsABCReport;
-(NSString *)subtypeContext;
-(BOOL)ignoreRateLimiting;
@end


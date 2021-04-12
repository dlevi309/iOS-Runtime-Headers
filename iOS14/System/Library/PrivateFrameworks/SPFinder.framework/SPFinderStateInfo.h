/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, NSSet;

@interface SPFinderStateInfo : NSObject <NSSecureCoding> {

	BOOL _state;
	BOOL _optInScreenOffScan;
	NSDate* _lastUpdated;
	NSDate* _lastPublishDate;
	NSDate* _lastScheduledPublishActivityDate;
	long long _activeCache;
	NSArray* _disabledReasonsArray;

}

@property (assign,nonatomic) BOOL state;                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL optInScreenOffScan;                              //@synthesize optInScreenOffScan=_optInScreenOffScan - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdated;                                   //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,copy) NSDate * lastPublishDate;                               //@synthesize lastPublishDate=_lastPublishDate - In the implementation block
@property (nonatomic,copy) NSDate * lastScheduledPublishActivityDate;              //@synthesize lastScheduledPublishActivityDate=_lastScheduledPublishActivityDate - In the implementation block
@property (assign,nonatomic) long long activeCache;                                //@synthesize activeCache=_activeCache - In the implementation block
@property (nonatomic,retain) NSArray * disabledReasonsArray;                       //@synthesize disabledReasonsArray=_disabledReasonsArray - In the implementation block
@property (nonatomic,copy,readonly) NSSet * disabledReasons; 
+(BOOL)supportsSecureCoding;
+(BOOL)canPublishAnonymously;
-(NSDate *)lastUpdated;
-(void)setLastPublishDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)activeCache;
-(NSDate *)lastPublishDate;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSSet *)disabledReasons;
-(void)setDisabledReasonsArray:(NSArray *)arg1 ;
-(id)description;
-(id)initWithState:(BOOL)arg1 optInScreenOffScan:(BOOL)arg2 lastUpdated:(id)arg3 lastPublishDate:(id)arg4 lastScheduledPublishActivityDate:(id)arg5 activeCache:(long long)arg6 disabledReasons:(id)arg7 ;
-(NSArray *)disabledReasonsArray;
-(NSDate *)lastScheduledPublishActivityDate;
-(void)setState:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)state;
-(BOOL)optInScreenOffScan;
-(void)setLastScheduledPublishActivityDate:(NSDate *)arg1 ;
-(void)setActiveCache:(long long)arg1 ;
-(void)setOptInScreenOffScan:(BOOL)arg1 ;
@end


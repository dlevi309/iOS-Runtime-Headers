/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface SPFinderStateInfo : NSObject <NSSecureCoding> {

	BOOL _state;
	NSDate* _lastUpdated;
	NSDate* _lastPublishDate;
	NSDate* _lastScheduledPublishActivityDate;
	long long _activeCache;

}

@property (assign,nonatomic) BOOL state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdated;                                   //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,copy) NSDate * lastPublishDate;                               //@synthesize lastPublishDate=_lastPublishDate - In the implementation block
@property (nonatomic,copy) NSDate * lastScheduledPublishActivityDate;              //@synthesize lastScheduledPublishActivityDate=_lastScheduledPublishActivityDate - In the implementation block
@property (assign,nonatomic) long long activeCache;                                //@synthesize activeCache=_activeCache - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)canPublishAnonymously;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)state;
-(void)setState:(BOOL)arg1 ;
-(NSDate *)lastUpdated;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(void)setLastPublishDate:(NSDate *)arg1 ;
-(void)setLastScheduledPublishActivityDate:(NSDate *)arg1 ;
-(void)setActiveCache:(long long)arg1 ;
-(NSDate *)lastPublishDate;
-(NSDate *)lastScheduledPublishActivityDate;
-(long long)activeCache;
-(id)initWithState:(BOOL)arg1 lastUpdated:(id)arg2 lastPublishDate:(id)arg3 lastScheduledPublishActivityDate:(id)arg4 activeCache:(long long)arg5 ;
@end


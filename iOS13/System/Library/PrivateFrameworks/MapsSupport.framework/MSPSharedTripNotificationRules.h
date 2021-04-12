/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface MSPSharedTripNotificationRules : NSObject <NSSecureCoding> {

	BOOL _hasMadeFinalPush;
	unsigned long long _maxPostedNotifications;
	unsigned long long _postedNotifcations;
	double _minimumETADifference;
	double _minimumNotificationInterval;
	NSDate* _lastPostedETADate;
	NSDate* _lastPostedNotificationDate;
	NSDate* _lastUpdatedDate;
	NSDate* _currentETADate;

}

@property (assign,nonatomic) unsigned long long maxPostedNotifications;                            //@synthesize maxPostedNotifications=_maxPostedNotifications - In the implementation block
@property (assign,nonatomic) unsigned long long postedNotifcations;                                //@synthesize postedNotifcations=_postedNotifcations - In the implementation block
@property (assign,nonatomic) double minimumETADifference;                                          //@synthesize minimumETADifference=_minimumETADifference - In the implementation block
@property (assign,nonatomic) double minimumNotificationInterval;                                   //@synthesize minimumNotificationInterval=_minimumNotificationInterval - In the implementation block
@property (nonatomic,retain) NSDate * lastPostedETADate;                                           //@synthesize lastPostedETADate=_lastPostedETADate - In the implementation block
@property (nonatomic,retain) NSDate * lastPostedNotificationDate;                                  //@synthesize lastPostedNotificationDate=_lastPostedNotificationDate - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdatedDate;                                             //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,retain) NSDate * currentETADate;                                              //@synthesize currentETADate=_currentETADate - In the implementation block
@property (assign,nonatomic) BOOL hasMadeFinalPush;                                                //@synthesize hasMadeFinalPush=_hasMadeFinalPush - In the implementation block
@property (nonatomic,readonly) unsigned long long currentlyNecessaryNotificationType; 
+(BOOL)supportsSecureCoding;
+(id)unarchivingObjectsSet;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastUpdatedDate;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(unsigned long long)maxPostedNotifications;
-(unsigned long long)postedNotifcations;
-(double)minimumETADifference;
-(double)minimumNotificationInterval;
-(NSDate *)lastPostedETADate;
-(NSDate *)lastPostedNotificationDate;
-(BOOL)hasMadeFinalPush;
-(id)initWithMaximumNumberOfNotifications:(unsigned long long)arg1 minimumNotificationInterval:(double)arg2 ;
-(NSDate *)currentETADate;
-(void)setLastPostedETADate:(NSDate *)arg1 ;
-(void)setLastPostedNotificationDate:(NSDate *)arg1 ;
-(void)setPostedNotifcations:(unsigned long long)arg1 ;
-(void)incrementMinimumETADiffernce;
-(void)setHasMadeFinalPush:(BOOL)arg1 ;
-(void)setCurrentETADate:(NSDate *)arg1 ;
-(void)setMinimumETADifference:(double)arg1 ;
-(id)initWithMaximumNumberOfNotifications:(unsigned long long)arg1 ;
-(void)didPostNotification;
-(unsigned long long)currentlyNecessaryNotificationType;
-(void)didReceiveUpdateWithETA:(double)arg1 lastUpdated:(double)arg2 ;
-(double)minimumETADifferenceIncrement;
-(void)setMaxPostedNotifications:(unsigned long long)arg1 ;
-(void)setMinimumNotificationInterval:(double)arg1 ;
@end


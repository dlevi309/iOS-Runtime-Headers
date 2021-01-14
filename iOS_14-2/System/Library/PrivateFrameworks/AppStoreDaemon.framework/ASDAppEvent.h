/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDate, NSNumber;

@interface ASDAppEvent : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasBeenPosted;
	BOOL _isBeta;
	BOOL _isClip;
	NSString* _accountID;
	NSString* _bundleID;
	NSString* _bundleVersion;
	NSString* _cohort;
	NSString* _deviceVendorID;
	long long _duration;
	long long _foregroundUsage;
	NSArray* _foregroundUsageEvents;
	long long _count;
	NSDate* _date;
	long long _eventSubtype;
	NSNumber* _eventTime;
	long long _eventType;
	NSNumber* _evid;
	NSNumber* _itemID;
	NSString* _itemName;
	NSString* _shortVersion;
	NSNumber* _startTime;
	NSNumber* _storefront;
	NSString* _weekStartDate;

}

@property (nonatomic,copy) NSString * accountID;                         //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                     //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * cohort;                            //@synthesize cohort=_cohort - In the implementation block
@property (nonatomic,copy) NSString * deviceVendorID;                    //@synthesize deviceVendorID=_deviceVendorID - In the implementation block
@property (assign,nonatomic) long long duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long foregroundUsage;                  //@synthesize foregroundUsage=_foregroundUsage - In the implementation block
@property (nonatomic,copy) NSArray * foregroundUsageEvents;              //@synthesize foregroundUsageEvents=_foregroundUsageEvents - In the implementation block
@property (assign,nonatomic) long long count;                            //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long eventSubtype;                     //@synthesize eventSubtype=_eventSubtype - In the implementation block
@property (nonatomic,copy) NSNumber * eventTime;                         //@synthesize eventTime=_eventTime - In the implementation block
@property (assign,nonatomic) long long eventType;                        //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSNumber * evid;                              //@synthesize evid=_evid - In the implementation block
@property (assign,nonatomic) BOOL hasBeenPosted;                         //@synthesize hasBeenPosted=_hasBeenPosted - In the implementation block
@property (assign,nonatomic) BOOL isBeta;                                //@synthesize isBeta=_isBeta - In the implementation block
@property (assign,nonatomic) BOOL isClip;                                //@synthesize isClip=_isClip - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                            //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                          //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSString * shortVersion;                      //@synthesize shortVersion=_shortVersion - In the implementation block
@property (nonatomic,copy) NSNumber * startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSNumber * storefront;                        //@synthesize storefront=_storefront - In the implementation block
@property (nonatomic,copy) NSString * weekStartDate;                     //@synthesize weekStartDate=_weekStartDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accountID;
-(BOOL)isBeta;
-(void)setCount:(long long)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSNumber *)storefront;
-(void)setStorefront:(NSNumber *)arg1 ;
-(void)setEventType:(long long)arg1 ;
-(long long)eventType;
-(void)setDuration:(long long)arg1 ;
-(NSNumber *)evid;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)cohort;
-(void)setCohort:(NSString *)arg1 ;
-(void)setDeviceVendorID:(NSString *)arg1 ;
-(void)setEventSubtype:(long long)arg1 ;
-(void)setForegroundUsage:(long long)arg1 ;
-(void)setForegroundUsageEvents:(NSArray *)arg1 ;
-(void)setHasBeenPosted:(BOOL)arg1 ;
-(void)setIsBeta:(BOOL)arg1 ;
-(void)setShortVersion:(NSString *)arg1 ;
-(void)setWeekStartDate:(NSString *)arg1 ;
-(NSString *)deviceVendorID;
-(long long)eventSubtype;
-(long long)foregroundUsage;
-(void)setStartTime:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(void)setDate:(NSDate *)arg1 ;
-(NSArray *)foregroundUsageEvents;
-(BOOL)hasBeenPosted;
-(NSString *)shortVersion;
-(NSString *)weekStartDate;
-(NSString *)bundleVersion;
-(void)setEvid:(NSNumber *)arg1 ;
-(NSString *)itemName;
-(id)description;
-(NSNumber *)itemID;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setIsClip:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)eventTime;
-(NSDate *)date;
-(BOOL)isClip;
-(long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(NSNumber *)startTime;
-(void)setEventTime:(NSNumber *)arg1 ;
@end


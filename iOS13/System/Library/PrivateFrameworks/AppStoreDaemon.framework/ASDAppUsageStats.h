/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSNumber;

@interface ASDAppUsageStats : NSObject <NSCopying> {

	BOOL _isExtensionUsage;
	NSString* _bundleID;
	NSString* _bundleVersion;
	NSDate* _endDate;
	long long _eventTime;
	NSNumber* _evid;
	NSNumber* _itemID;
	NSString* _itemName;
	NSDate* _lastEventEndDate;
	NSString* _launchReason;
	NSDate* _startDate;
	long long _usageTime;
	long long _usageCount;

}

@property (nonatomic,copy) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;               //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                       //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long eventTime;                  //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,copy) NSNumber * evid;                        //@synthesize evid=_evid - In the implementation block
@property (assign,nonatomic) BOOL isExtensionUsage;                //@synthesize isExtensionUsage=_isExtensionUsage - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                      //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                    //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSDate * lastEventEndDate;              //@synthesize lastEventEndDate=_lastEventEndDate - In the implementation block
@property (nonatomic,copy) NSString * launchReason;                //@synthesize launchReason=_launchReason - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) long long usageTime;                  //@synthesize usageTime=_usageTime - In the implementation block
@property (assign,nonatomic) long long usageCount;                 //@synthesize usageCount=_usageCount - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)bundleID;
-(NSString *)bundleVersion;
-(NSNumber *)itemID;
-(NSString *)itemName;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)launchReason;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setEventTime:(long long)arg1 ;
-(long long)eventTime;
-(void)setItemName:(NSString *)arg1 ;
-(void)setLaunchReason:(NSString *)arg1 ;
-(id)_formatTimeInternal:(long long)arg1 ;
-(NSNumber *)evid;
-(void)setEvid:(NSNumber *)arg1 ;
-(BOOL)isExtensionUsage;
-(void)setIsExtensionUsage:(BOOL)arg1 ;
-(NSDate *)lastEventEndDate;
-(void)setLastEventEndDate:(NSDate *)arg1 ;
-(long long)usageTime;
-(void)setUsageTime:(long long)arg1 ;
-(long long)usageCount;
-(void)setUsageCount:(long long)arg1 ;
@end


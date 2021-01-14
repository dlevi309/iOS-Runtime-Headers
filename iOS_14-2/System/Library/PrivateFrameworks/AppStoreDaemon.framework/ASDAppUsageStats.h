/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDate, NSNumber;

@interface ASDAppUsageStats : NSObject <NSCopying> {

	BOOL _isClip;
	BOOL _isClipLaunch;
	BOOL _isExtensionUsage;
	NSString* _bundleID;
	NSString* _bundleVersion;
	NSString* _clipBundleID;
	NSURL* _clipFullURL;
	NSString* _clipLaunchReason;
	NSString* _clipReferrerURL;
	NSString* _clipReferrerBundleID;
	NSString* _clipWebAppBundleID;
	NSString* _containingBundleID;
	NSDate* _endDate;
	long long _eventTime;
	NSNumber* _evid;
	NSNumber* _itemID;
	NSString* _itemName;
	NSDate* _lastEventEndDate;
	NSString* _launchReason;
	NSString* _sourceStream;
	NSDate* _startDate;
	long long _usageTime;
	long long _usageCount;

}

@property (nonatomic,copy) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                     //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * clipBundleID;                      //@synthesize clipBundleID=_clipBundleID - In the implementation block
@property (nonatomic,copy) NSURL * clipFullURL;                          //@synthesize clipFullURL=_clipFullURL - In the implementation block
@property (nonatomic,copy) NSString * clipLaunchReason;                  //@synthesize clipLaunchReason=_clipLaunchReason - In the implementation block
@property (nonatomic,copy) NSString * clipReferrerURL;                   //@synthesize clipReferrerURL=_clipReferrerURL - In the implementation block
@property (nonatomic,copy) NSString * clipReferrerBundleID;              //@synthesize clipReferrerBundleID=_clipReferrerBundleID - In the implementation block
@property (nonatomic,copy) NSString * clipWebAppBundleID;                //@synthesize clipWebAppBundleID=_clipWebAppBundleID - In the implementation block
@property (nonatomic,copy) NSString * containingBundleID;                //@synthesize containingBundleID=_containingBundleID - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long eventTime;                        //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,copy) NSNumber * evid;                              //@synthesize evid=_evid - In the implementation block
@property (assign,nonatomic) BOOL isClip;                                //@synthesize isClip=_isClip - In the implementation block
@property (assign,nonatomic) BOOL isClipLaunch;                          //@synthesize isClipLaunch=_isClipLaunch - In the implementation block
@property (assign,nonatomic) BOOL isExtensionUsage;                      //@synthesize isExtensionUsage=_isExtensionUsage - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                            //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                          //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSDate * lastEventEndDate;                    //@synthesize lastEventEndDate=_lastEventEndDate - In the implementation block
@property (nonatomic,copy) NSString * launchReason;                      //@synthesize launchReason=_launchReason - In the implementation block
@property (nonatomic,copy) NSString * sourceStream;                      //@synthesize sourceStream=_sourceStream - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) long long usageTime;                        //@synthesize usageTime=_usageTime - In the implementation block
@property (assign,nonatomic) long long usageCount;                       //@synthesize usageCount=_usageCount - In the implementation block
-(void)setItemID:(NSNumber *)arg1 ;
-(NSDate *)endDate;
-(NSString *)clipBundleID;
-(NSNumber *)evid;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setLaunchReason:(NSString *)arg1 ;
-(NSDate *)startDate;
-(long long)usageTime;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)bundleVersion;
-(void)setEvid:(NSNumber *)arg1 ;
-(NSString *)itemName;
-(id)description;
-(NSNumber *)itemID;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setIsClip:(BOOL)arg1 ;
-(NSURL *)clipFullURL;
-(long long)eventTime;
-(BOOL)isClip;
-(id)_formatTimeInternal:(long long)arg1 ;
-(id)_formatShortDate:(id)arg1 ;
-(void)setClipBundleID:(NSString *)arg1 ;
-(void)setClipFullURL:(NSURL *)arg1 ;
-(NSString *)clipLaunchReason;
-(void)setClipLaunchReason:(NSString *)arg1 ;
-(NSString *)clipReferrerURL;
-(void)setClipReferrerURL:(NSString *)arg1 ;
-(NSString *)clipReferrerBundleID;
-(NSString *)clipWebAppBundleID;
-(void)setClipReferrerBundleID:(NSString *)arg1 ;
-(void)setClipWebAppBundleID:(NSString *)arg1 ;
-(NSString *)containingBundleID;
-(void)setContainingBundleID:(NSString *)arg1 ;
-(BOOL)isClipLaunch;
-(void)setIsClipLaunch:(BOOL)arg1 ;
-(BOOL)isExtensionUsage;
-(void)setIsExtensionUsage:(BOOL)arg1 ;
-(NSDate *)lastEventEndDate;
-(void)setLastEventEndDate:(NSDate *)arg1 ;
-(NSString *)sourceStream;
-(void)setSourceStream:(NSString *)arg1 ;
-(void)setUsageTime:(long long)arg1 ;
-(long long)usageCount;
-(void)setUsageCount:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(NSString *)launchReason;
-(void)setEventTime:(long long)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString, NSDateComponents;

@interface DDSAssetPolicy : NSObject <NSSecureCoding> {

	BOOL _downloadOverCellular;
	BOOL _downloadWithoutPower;
	long long _preferredDownloadFrequency;
	NSSet* _notificationDownloadTriggers;
	NSString* _downloadCompletionNotification;
	NSDateComponents* _idleUsageEvictionPeriod;

}

@property (nonatomic,retain) NSDateComponents * idleUsageEvictionPeriod;              //@synthesize idleUsageEvictionPeriod=_idleUsageEvictionPeriod - In the implementation block
@property (assign,nonatomic) long long preferredDownloadFrequency;                    //@synthesize preferredDownloadFrequency=_preferredDownloadFrequency - In the implementation block
@property (assign,nonatomic) BOOL downloadOverCellular;                               //@synthesize downloadOverCellular=_downloadOverCellular - In the implementation block
@property (assign,nonatomic) BOOL downloadWithoutPower;                               //@synthesize downloadWithoutPower=_downloadWithoutPower - In the implementation block
@property (nonatomic,copy) NSSet * notificationDownloadTriggers;                      //@synthesize notificationDownloadTriggers=_notificationDownloadTriggers - In the implementation block
@property (nonatomic,copy) NSString * downloadCompletionNotification;                 //@synthesize downloadCompletionNotification=_downloadCompletionNotification - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)assetPolicy;
-(NSString *)downloadCompletionNotification;
-(id)init;
-(NSDateComponents *)idleUsageEvictionPeriod;
-(long long)preferredDownloadFrequency;
-(void)setDownloadOverCellular:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToAssetPolicy:(id)arg1 ;
-(void)setNotificationDownloadTriggers:(NSSet *)arg1 ;
-(void)setPreferredDownloadFrequency:(long long)arg1 ;
-(id)description;
-(void)setDownloadCompletionNotification:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)notificationDownloadTriggers;
-(void)setIdleUsageEvictionPeriod:(NSDateComponents *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)downloadOverCellular;
-(void)setDownloadWithoutPower:(BOOL)arg1 ;
-(BOOL)downloadWithoutPower;
@end


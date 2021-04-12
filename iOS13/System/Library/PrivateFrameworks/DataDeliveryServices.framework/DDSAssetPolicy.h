/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPreferredDownloadFrequency:(long long)arg1 ;
-(BOOL)downloadWithoutPower;
-(void)setDownloadWithoutPower:(BOOL)arg1 ;
-(BOOL)downloadOverCellular;
-(void)setDownloadOverCellular:(BOOL)arg1 ;
-(long long)preferredDownloadFrequency;
-(NSString *)downloadCompletionNotification;
-(NSDateComponents *)idleUsageEvictionPeriod;
-(NSSet *)notificationDownloadTriggers;
-(BOOL)isEqualToAssetPolicy:(id)arg1 ;
-(void)setNotificationDownloadTriggers:(NSSet *)arg1 ;
-(void)setDownloadCompletionNotification:(NSString *)arg1 ;
-(void)setIdleUsageEvictionPeriod:(NSDateComponents *)arg1 ;
@end


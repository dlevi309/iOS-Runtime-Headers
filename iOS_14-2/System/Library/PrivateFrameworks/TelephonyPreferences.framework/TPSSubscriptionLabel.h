/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/


@class NSString;

@interface TPSSubscriptionLabel : NSObject {

	NSString* _localizedBadgeLabel;
	NSString* _localizedLongLabel;
	NSString* _unlocalizedLongLabel;

}

@property (nonatomic,readonly) NSString * localizedBadgeLabel;               //@synthesize localizedBadgeLabel=_localizedBadgeLabel - In the implementation block
@property (nonatomic,readonly) NSString * localizedLongLabel;                //@synthesize localizedLongLabel=_localizedLongLabel - In the implementation block
@property (nonatomic,readonly) NSString * unlocalizedLongLabel;              //@synthesize unlocalizedLongLabel=_unlocalizedLongLabel - In the implementation block
+(id)labelsFromUnlocalizedLabels:(id)arg1 localizedLongLabels:(id)arg2 localizedBadgeLabels:(id)arg3 ;
-(id)description;
-(NSString *)localizedBadgeLabel;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUnlocalizedLabel:(id)arg1 localizedLongLabel:(id)arg2 localizedBadgeLabel:(id)arg3 ;
-(NSString *)localizedLongLabel;
-(NSString *)unlocalizedLongLabel;
-(BOOL)isEqualToSubscriptionLabel:(id)arg1 ;
@end


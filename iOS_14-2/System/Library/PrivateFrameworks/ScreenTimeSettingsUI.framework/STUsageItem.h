/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, STUsageTrustIdentifier, UIColor, NSDate, NSNumber, UIImage;

@interface STUsageItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	STUsageTrustIdentifier* _trustIdentifier;
	NSString* _categoryIdentifier;
	unsigned long long _itemType;
	UIColor* _color;
	unsigned long long _timePeriod;
	NSDate* _startDate;
	NSNumber* _totalUsage;
	NSNumber* _maxUsage;
	NSNumber* _minUsage;

}

@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) STUsageTrustIdentifier * trustIdentifier;              //@synthesize trustIdentifier=_trustIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * budgetItemIdentifier; 
@property (nonatomic,readonly) BOOL usageTrusted; 
@property (nonatomic,copy) NSString * categoryIdentifier;                         //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long itemType;                         //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,retain) UIColor * color;                                     //@synthesize color=_color - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) UIImage * image; 
@property (assign,nonatomic) unsigned long long timePeriod;                       //@synthesize timePeriod=_timePeriod - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSNumber * totalUsage;                                 //@synthesize totalUsage=_totalUsage - In the implementation block
@property (nonatomic,copy) NSNumber * maxUsage;                                   //@synthesize maxUsage=_maxUsage - In the implementation block
@property (nonatomic,copy) NSNumber * minUsage;                                   //@synthesize minUsage=_minUsage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(NSString *)categoryIdentifier;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(UIColor *)color;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)image;
-(void)setItemType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)itemType;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setTimePeriod:(unsigned long long)arg1 ;
-(unsigned long long)timePeriod;
-(BOOL)usageTrusted;
-(void)setTotalUsage:(NSNumber *)arg1 ;
-(NSNumber *)totalUsage;
-(NSString *)budgetItemIdentifier;
-(STUsageTrustIdentifier *)trustIdentifier;
-(void)setTrustIdentifier:(STUsageTrustIdentifier *)arg1 ;
-(NSNumber *)maxUsage;
-(void)setMaxUsage:(NSNumber *)arg1 ;
-(NSNumber *)minUsage;
-(void)setMinUsage:(NSNumber *)arg1 ;
@end


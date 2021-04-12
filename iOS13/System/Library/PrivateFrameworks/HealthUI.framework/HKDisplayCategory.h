/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString, UIImage, UIColor, HKFillStyle;

@interface HKDisplayCategory : NSObject {

	/*^block*/id _keyColor;
	long long _categoryID;
	NSString* _categoryName;
	NSString* _displayName;
	NSString* _largeListIconName;
	NSString* _listIconName;
	NSString* _healthDataIconName;
	NSString* _shareIconName;

}

@property (nonatomic,readonly) long long categoryID;                       //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,readonly) NSString * categoryName;                    //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * largeListIconName;               //@synthesize largeListIconName=_largeListIconName - In the implementation block
@property (nonatomic,readonly) NSString * listIconName;                    //@synthesize listIconName=_listIconName - In the implementation block
@property (nonatomic,readonly) NSString * healthDataIconName;              //@synthesize healthDataIconName=_healthDataIconName - In the implementation block
@property (nonatomic,readonly) NSString * shareIconName;                   //@synthesize shareIconName=_shareIconName - In the implementation block
@property (nonatomic,readonly) UIImage * largeListIcon; 
@property (nonatomic,readonly) UIImage * listIcon; 
@property (nonatomic,readonly) UIImage * healthDataIcon; 
@property (nonatomic,readonly) UIImage * shareIcon; 
@property (nonatomic,readonly) BOOL isMeCategory; 
@property (nonatomic,readonly) BOOL isTopLevelCategory; 
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) HKFillStyle * fillStyle; 
+(id)topLevelCategoryIdentifiers;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)displayName;
-(UIColor *)color;
-(NSString *)categoryName;
-(long long)categoryID;
-(HKFillStyle *)fillStyle;
-(UIImage *)listIcon;
-(UIImage *)largeListIcon;
-(BOOL)isTopLevelCategory;
-(UIImage *)healthDataIcon;
-(UIImage *)shareIcon;
-(BOOL)isMeCategory;
-(NSString *)largeListIconName;
-(NSString *)listIconName;
-(NSString *)healthDataIconName;
-(NSString *)shareIconName;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSString, UIImage;

@interface STUsageDetailItem : NSObject {

	BOOL _usageTrusted;
	float _quantity;
	NSString* _identifier;
	long long _type;

}

@property (copy,readonly) NSString * localizedDisplayName; 
@property (readonly) UIImage * iconImage; 
@property (copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (readonly) BOOL isAllAppsOrCategories; 
@property (assign) long long type;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) float quantity;                            //@synthesize quantity=_quantity - In the implementation block
@property (readonly) float sortQuantity; 
@property (readonly) BOOL usageTrusted;                                 //@synthesize usageTrusted=_usageTrusted - In the implementation block
+(void)iconImageForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)keyPathsForValuesAffectingIsAllAppsOrCategories;
+(id)keyPathsForValuesAffectingSortQuantity;
-(UIImage *)iconImage;
-(NSString *)localizedDisplayName;
-(void)_didFindIconImage:(id)arg1 ;
-(float)quantity;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(void)setQuantity:(float)arg1 ;
-(NSString *)identifier;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 usageTrusted:(BOOL)arg3 ;
-(BOOL)usageTrusted;
-(BOOL)isAllAppsOrCategories;
-(float)sortQuantity;
@end


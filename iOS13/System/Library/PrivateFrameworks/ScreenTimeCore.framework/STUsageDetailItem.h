/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSString;

@interface STUsageDetailItem : NSObject {

	float _quantity;
	NSString* _identifier;
	long long _type;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) BOOL isAllAppsOrCategories; 
@property (assign) long long type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) float quantity;                  //@synthesize quantity=_quantity - In the implementation block
@property (readonly) float sortQuantity; 
+(id)keyPathsForValuesAffectingIsAllAppsOrCategories;
+(id)keyPathsForValuesAffectingSortQuantity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)identifier;
-(float)quantity;
-(void)setQuantity:(float)arg1 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 ;
-(BOOL)isAllAppsOrCategories;
-(float)sortQuantity;
@end


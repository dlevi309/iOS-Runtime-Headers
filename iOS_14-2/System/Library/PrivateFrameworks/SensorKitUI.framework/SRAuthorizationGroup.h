/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/


@class NSBundle, NSString, NSArray, UIImage;

@interface SRAuthorizationGroup : NSObject {

	NSBundle* _bundle;

}

@property (copy,readonly) NSString * localizedDisplayName; 
@property (copy,readonly) NSArray * localizedCollectedData; 
@property (copy,readonly) NSArray * localizedNotCollectedData; 
@property (copy,readonly) NSString * localizedDescription; 
@property (copy,readonly) NSString * localizedRequiredAuthAlertDetail; 
@property (copy,readonly) NSString * localizedRevokeRequiredAuthAlertDetail; 
@property (copy,readonly) NSString * localizedPlatforms; 
@property (copy,readonly) NSArray * platforms; 
@property (retain,readonly) UIImage * illustration; 
@property (copy,readonly) NSArray * localizedSampleData; 
@property (copy,readonly) NSString * authorizationService; 
+(void)initialize;
+(id)authorizationGroupWithServiceName:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(NSString *)localizedDescription;
-(NSString *)localizedDisplayName;
-(void)dealloc;
-(NSArray *)platforms;
-(id)localizeExampleDataValue:(id)arg1 ;
-(NSArray *)localizedCollectedData;
-(NSArray *)localizedNotCollectedData;
-(NSString *)localizedRequiredAuthAlertDetail;
-(NSString *)localizedRevokeRequiredAuthAlertDetail;
-(NSString *)localizedPlatforms;
-(UIImage *)illustration;
-(NSArray *)localizedSampleData;
-(NSString *)authorizationService;
-(id)infoPlistAuthorizationCategory;
@end


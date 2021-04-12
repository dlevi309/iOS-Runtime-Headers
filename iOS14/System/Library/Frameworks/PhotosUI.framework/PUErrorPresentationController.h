/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSArray, NSString;

@interface PUErrorPresentationController : NSObject {

	NSArray* _errors;
	NSArray* _assets;
	NSString* _radarDescription;
	NSString* _radarComponentID;
	NSString* _radarComponentName;
	NSString* _radarComponentVersion;
	NSString* _alertTitle;
	NSString* _alertMessage;
	NSArray* _additionalAlertActions;
	NSString* _dismissButtonTitle;
	NSString* _radarTitle;
	NSArray* _additionalQuestionsInRadarDescription;
	NSString* _assetsListDescription;

}

@property (nonatomic,copy) NSString * alertTitle;                                        //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,copy) NSString * alertMessage;                                      //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,copy) NSArray * additionalAlertActions;                             //@synthesize additionalAlertActions=_additionalAlertActions - In the implementation block
@property (nonatomic,copy) NSString * dismissButtonTitle;                                //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * radarTitle;                                        //@synthesize radarTitle=_radarTitle - In the implementation block
@property (nonatomic,copy) NSArray * additionalQuestionsInRadarDescription;              //@synthesize additionalQuestionsInRadarDescription=_additionalQuestionsInRadarDescription - In the implementation block
@property (nonatomic,copy) NSString * assetsListDescription;                             //@synthesize assetsListDescription=_assetsListDescription - In the implementation block
@property (nonatomic,readonly) NSArray * errors;                                         //@synthesize errors=_errors - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                         //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy) NSString * radarDescription;                                  //@synthesize radarDescription=_radarDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * radarComponentID;                         //@synthesize radarComponentID=_radarComponentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * radarComponentName;                       //@synthesize radarComponentName=_radarComponentName - In the implementation block
@property (nonatomic,copy,readonly) NSString * radarComponentVersion;                    //@synthesize radarComponentVersion=_radarComponentVersion - In the implementation block
+(id)alertActionForNavigatingToDestination:(long long)arg1 withTitle:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)errorIsNetworkRelatedCPLError:(id)arg1 ;
+(BOOL)assetIsStandardVideo:(id)arg1 ;
+(BOOL)errorIsLowDiskSpaceRelatedCPLError:(id)arg1 ;
+(BOOL)errorIsAuthenticationRelatedCPLError:(id)arg1 ;
-(NSArray *)assets;
-(void)setAlertMessage:(NSString *)arg1 ;
-(void)setAlertTitle:(NSString *)arg1 ;
-(NSString *)radarTitle;
-(NSArray *)errors;
-(NSString *)alertTitle;
-(NSString *)alertMessage;
-(id)initWithErrors:(id)arg1 forAssets:(id)arg2 ;
-(void)setRadarComponentID:(id)arg1 name:(id)arg2 version:(id)arg3 ;
-(BOOL)shouldShowFileRadarAction;
-(BOOL)shouldIncludeAssetInRadarDescription:(id)arg1 ;
-(id)additionalRadarDescriptionLinesForAsset:(id)arg1 ;
-(id)assetsDescriptionFromAssets:(id)arg1 ;
-(void)configureRadarPropertiesFromError:(id)arg1 withAssets:(id)arg2 ;
-(void)configureAlertPropertiesFromError:(id)arg1 withAssets:(id)arg2 willShowFileRadarButton:(BOOL)arg3 alertCompletion:(/*^block*/id)arg4 ;
-(id)alertControllerWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)radarDescription;
-(void)setRadarDescription:(NSString *)arg1 ;
-(NSString *)radarComponentID;
-(NSString *)radarComponentName;
-(NSString *)radarComponentVersion;
-(NSArray *)additionalAlertActions;
-(void)setAdditionalAlertActions:(NSArray *)arg1 ;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
-(void)setRadarTitle:(NSString *)arg1 ;
-(NSArray *)additionalQuestionsInRadarDescription;
-(void)setAdditionalQuestionsInRadarDescription:(NSArray *)arg1 ;
-(NSString *)assetsListDescription;
-(void)setAssetsListDescription:(NSString *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/


@class NSString, NSURL, NSDictionary, NSSet;

@interface SRAppInfoPlistHelper : NSObject {

	NSString* _appName;
	NSString* _studyName;
	NSURL* _privacyLink;
	NSString* _usageDescription;
	NSDictionary* _perCategoryDetailDescription;
	NSSet* _requiredServices;

}

@property (nonatomic,copy) NSString * appName;                                       //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSURL * privacyLink;                                    //@synthesize privacyLink=_privacyLink - In the implementation block
@property (nonatomic,copy) NSString * usageDescription;                              //@synthesize usageDescription=_usageDescription - In the implementation block
@property (nonatomic,copy) NSDictionary * perCategoryDetailDescription;              //@synthesize perCategoryDetailDescription=_perCategoryDetailDescription - In the implementation block
@property (nonatomic,copy) NSSet * requiredServices;                                 //@synthesize requiredServices=_requiredServices - In the implementation block
@property (nonatomic,copy,readonly) NSString * studyName;                            //@synthesize studyName=_studyName - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)initWithBundle:(id)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(void)setPrivacyLink:(NSURL *)arg1 ;
-(NSURL *)privacyLink;
-(void)verifyRequiredInfoPlistContentForRequestedServices:(id)arg1 ;
-(NSString *)usageDescription;
-(void)crashWithMessage:(id)arg1 ;
-(NSDictionary *)perCategoryDetailDescription;
-(NSString *)studyName;
-(void)setUsageDescription:(NSString *)arg1 ;
-(void)setPerCategoryDetailDescription:(NSDictionary *)arg1 ;
-(NSSet *)requiredServices;
-(void)setRequiredServices:(NSSet *)arg1 ;
@end


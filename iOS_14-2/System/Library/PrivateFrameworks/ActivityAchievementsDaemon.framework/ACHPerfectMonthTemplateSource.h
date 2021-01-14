/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/ACHTemplateSource.h>

@class NSString, NSCalendar;

@interface ACHPerfectMonthTemplateSource : NSObject <ACHTemplateSource> {

	NSCalendar* _utcGregorianCalendar;

}

@property (nonatomic,retain) NSCalendar * utcGregorianCalendar;                                 //@synthesize utcGregorianCalendar=_utcGregorianCalendar - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long runCadence; 
@property (assign,nonatomic,__weak) NSObject*<ACHTemplateSourceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)identifier;
-(BOOL)sourceShouldRunForDate:(id)arg1 ;
-(void)templatesForDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)localizationBundleURLForTemplate:(id)arg1 ;
-(id)resourceBundleURLForTemplate:(id)arg1 ;
-(id)propertyListBundleURLForTemplate:(id)arg1 ;
-(id)stickerBundleURLForTemplate:(id)arg1 ;
-(long long)runCadence;
-(NSCalendar *)utcGregorianCalendar;
-(id)_monthlyAchievementsAssetsDirectoryBasePath;
-(id)_modelsDirectoryBasePathForTemplate:(id)arg1 ;
-(id)_monthStringFromTemplateName:(id)arg1 ;
-(void)setUtcGregorianCalendar:(NSCalendar *)arg1 ;
@end


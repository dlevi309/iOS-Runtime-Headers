/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ACHTemplateSource.h>

@protocol ASCompetitionTemplateSourceDataProvider;
@class NSString;

@interface ASCompetitionTemplateSource : NSObject <ACHTemplateSource> {

	id<ASCompetitionTemplateSourceDataProvider> _dataProvider;

}

@property (assign,nonatomic,__weak) id<ASCompetitionTemplateSourceDataProvider> dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long runCadence; 
@property (assign,nonatomic,__weak) NSObject*<ACHTemplateSourceDelegate> delegate; 
-(NSString *)identifier;
-(void)setDataProvider:(id<ASCompetitionTemplateSourceDataProvider>)arg1 ;
-(id<ASCompetitionTemplateSourceDataProvider>)dataProvider;
-(BOOL)sourceShouldRunForDate:(id)arg1 ;
-(void)templatesForDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)localizationBundleURLForTemplate:(id)arg1 ;
-(id)resourceBundleURLForTemplate:(id)arg1 ;
-(id)propertyListBundleURLForTemplate:(id)arg1 ;
-(id)stickerBundleURLForTemplate:(id)arg1 ;
-(long long)runCadence;
-(id)customPlaceholderValuesForTemplate:(id)arg1 ;
-(id)_competitionForVictoryTemplate:(id)arg1 ;
-(id)_friendForVictoryTemplate:(id)arg1 ;
-(id)unusedTemplateNamesForFriendWithUUID:(id)arg1 ;
@end


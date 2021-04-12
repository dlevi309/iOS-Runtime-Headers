/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class ACHTemplateStore, NSCalendar;

@interface ACHEarnedInstanceDuplicateUtility : NSObject {

	ACHTemplateStore* _templateStore;
	NSCalendar* _gregorianCalendar;

}

@property (assign,nonatomic,__weak) ACHTemplateStore * templateStore;              //@synthesize templateStore=_templateStore - In the implementation block
@property (nonatomic,retain) NSCalendar * gregorianCalendar;                       //@synthesize gregorianCalendar=_gregorianCalendar - In the implementation block
-(ACHTemplateStore *)templateStore;
-(NSCalendar *)gregorianCalendar;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(void)setGregorianCalendar:(NSCalendar *)arg1 ;
-(id)earnedInstancesWithoutDuplicates:(id)arg1 ;
-(id)earnedInstancesLimitedByEarnLimit:(id)arg1 ;
-(id)initWithTemplateStore:(id)arg1 ;
@end


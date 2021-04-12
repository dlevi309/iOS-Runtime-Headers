/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class ACHTemplateStore, NSCalendar;

@interface ACHEarnedInstanceDuplicateUtility : NSObject {

	ACHTemplateStore* _templateStore;
	NSCalendar* _gregorianCalendar;

}

@property (assign,nonatomic,__weak) ACHTemplateStore * templateStore;              //@synthesize templateStore=_templateStore - In the implementation block
@property (nonatomic,retain) NSCalendar * gregorianCalendar;                       //@synthesize gregorianCalendar=_gregorianCalendar - In the implementation block
-(NSCalendar *)gregorianCalendar;
-(ACHTemplateStore *)templateStore;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(void)setGregorianCalendar:(NSCalendar *)arg1 ;
-(id)earnedInstancesWithoutDuplicates:(id)arg1 ;
-(id)earnedInstancesLimitedByEarnLimit:(id)arg1 ;
-(id)initWithTemplateStore:(id)arg1 ;
@end


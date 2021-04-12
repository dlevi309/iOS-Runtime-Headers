/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/Education.healthplugin/Education
*/

#import <HealthExperience/HealthExperience.AsynchronousOperation.h>
#import <Education/Education.ArticleChangeDetectorObserver.h>

@interface Education.EducationFeedItemGenerator : HealthExperience.AsynchronousOperation <Education.ArticleChangeDetectorObserver> {

	 context;
	 $__lazy_storage_$_articlesGenerator;
	 $__lazy_storage_$_onboardingGenerator;
	 workQueue;
	 articleChangeDetector;

}
-(void)readArticleWithIdentifier:(id)arg1 detectedBy:(id)arg2 ;
-(id)init;
-(void)main;
@end


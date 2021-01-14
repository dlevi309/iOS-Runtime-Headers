/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>

@class PXForYouPeopleQuestionsDataSource, NSString;

@interface PXPeopleQuestionsGadgetProvider : PXGadgetProvider {

	PXForYouPeopleQuestionsDataSource* _dataSource;

}

@property (nonatomic,retain) PXForYouPeopleQuestionsDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
+(id)_gadgetForQuestion:(id)arg1 ;
-(void)generateGadgets;
-(NSString *)localizedTitle;
-(id)init;
-(PXForYouPeopleQuestionsDataSource *)dataSource;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)setDataSource:(PXForYouPeopleQuestionsDataSource *)arg1 ;
@end


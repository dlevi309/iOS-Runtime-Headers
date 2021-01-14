/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NTTodayModuleDescriptorsOperation.h>

@class NSArray;

@interface NTParsecModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation {

	NSArray* _resultTodayModuleDescriptors;

}

@property (nonatomic,copy) NSArray * resultTodayModuleDescriptors;              //@synthesize resultTodayModuleDescriptors=_resultTodayModuleDescriptors - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSArray *)resultTodayModuleDescriptors;
-(void)performOperation;
-(void)setResultTodayModuleDescriptors:(NSArray *)arg1 ;
@end

/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NTTodayModuleDescriptorsOperation.h>

@protocol NFCopying;
@class NSArray;

@interface NTNewsModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation {

	NSArray* _resultTodayModuleDescriptors;
	id<NFCopying> _prefetchedContent;

}

@property (nonatomic,copy) NSArray * resultTodayModuleDescriptors;              //@synthesize resultTodayModuleDescriptors=_resultTodayModuleDescriptors - In the implementation block
@property (nonatomic,copy) id<NFCopying> prefetchedContent;                     //@synthesize prefetchedContent=_prefetchedContent - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSArray *)resultTodayModuleDescriptors;
-(void)performOperation;
-(id<NFCopying>)prefetchedContent;
-(void)setResultTodayModuleDescriptors:(NSArray *)arg1 ;
-(void)setPrefetchedContent:(id<NFCopying>)arg1 ;
@end


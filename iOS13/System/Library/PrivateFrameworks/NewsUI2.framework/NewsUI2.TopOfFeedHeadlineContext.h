/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/TSTopOfFeedHeadlineContextType.h>

@class NSString;

@interface NewsUI2.TopOfFeedHeadlineContext : NSObject <TSTopOfFeedHeadlineContextType> {

	 position;
	 count;
	 moduleExposureID;
	 specialEventsOperationResultType;

}

@property (readonly,nonatomic) long long position; 
@property (readonly,nonatomic) long long count; 
@property (readonly,nonatomic) NSString * moduleExposureID; 
@property (readonly,nonatomic) long long specialEventsOperationResultType; 
-(id)init;
-(long long)count;
-(long long)position;
-(NSString *)moduleExposureID;
-(long long)specialEventsOperationResultType;
@end


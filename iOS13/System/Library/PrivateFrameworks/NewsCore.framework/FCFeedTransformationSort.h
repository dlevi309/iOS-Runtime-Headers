/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSString;

@interface FCFeedTransformationSort : NSObject <FCFeedTransforming>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithSortMethod:(long long)arg1 ;
+(id)transformationWithSortMethod:(long long)arg1 configurationSet:(long long)arg2 personalizer:(id)arg3 ;
+(id)transformationWithSortMethod:(long long)arg1 personalizer:(id)arg2 ;
-(id)transformFeedItems:(id)arg1 ;
@end


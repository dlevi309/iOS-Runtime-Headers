/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


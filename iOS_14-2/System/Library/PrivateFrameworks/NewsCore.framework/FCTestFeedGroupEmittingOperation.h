/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCSingleTagFeedGroupEmittingOperation.h>

@interface FCTestFeedGroupEmittingOperation : FCSingleTagFeedGroupEmittingOperation {

	BOOL _disableFiltering;

}

@property (assign,nonatomic) BOOL disableFiltering;              //@synthesize disableFiltering=_disableFiltering - In the implementation block
-(BOOL)disableFiltering;
-(void)setDisableFiltering:(BOOL)arg1 ;
-(id)feedTransformations;
-(unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)arg1 ;
@end


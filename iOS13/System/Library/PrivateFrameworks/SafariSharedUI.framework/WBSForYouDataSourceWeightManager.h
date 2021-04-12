/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSDictionaryKeyValueStore;
@interface WBSForYouDataSourceWeightManager : NSObject {

	id<WBSDictionaryKeyValueStore> _store;

}
-(void)clear;
-(double)weightForSource:(unsigned long long)arg1 ;
-(id)initWithKeyValueStore:(id)arg1 ;
-(void)downvoteSource:(unsigned long long)arg1 ;
@end


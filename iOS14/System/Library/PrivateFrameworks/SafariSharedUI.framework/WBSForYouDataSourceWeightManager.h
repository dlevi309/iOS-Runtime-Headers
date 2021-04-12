/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol WBSDictionaryKeyValueStore;
@interface WBSForYouDataSourceWeightManager : NSObject {

	id<WBSDictionaryKeyValueStore> _store;

}
-(void)clear;
-(double)weightForSource:(unsigned long long)arg1 ;
-(void)downvoteSource:(unsigned long long)arg1 ;
-(id)initWithKeyValueStore:(id)arg1 ;
@end


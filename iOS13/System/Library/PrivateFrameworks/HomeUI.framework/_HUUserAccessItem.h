/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HMUser;

@interface _HUUserAccessItem : HFItem {

	HMUser* _user;
	/*^block*/id _resultsBlock;

}

@property (nonatomic,readonly) HMUser * user;                     //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) id resultsBlock;              //@synthesize resultsBlock=_resultsBlock - In the implementation block
-(HMUser *)user;
-(id)resultsBlock;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithUser:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
@end


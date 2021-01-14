/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)resultsBlock;
-(HMUser *)user;
-(id)initWithUser:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
@end


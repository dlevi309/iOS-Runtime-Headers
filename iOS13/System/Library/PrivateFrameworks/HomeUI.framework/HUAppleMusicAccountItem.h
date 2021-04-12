/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUAppleMusicItem.h>

@class ACAccount;

@interface HUAppleMusicAccountItem : HUAppleMusicItem {

	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ACAccount *)account;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 account:(id)arg2 ;
@end


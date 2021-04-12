/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUAppleMusicItem.h>

@class ACAccount;

@interface HUAppleMusicAccountItem : HUAppleMusicItem {

	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(ACAccount *)account;
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 account:(id)arg2 ;
@end


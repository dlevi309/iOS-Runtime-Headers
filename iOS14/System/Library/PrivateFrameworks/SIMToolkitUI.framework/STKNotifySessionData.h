/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/STKTextSessionData.h>

@interface STKNotifySessionData : STKTextSessionData {

	long long _notifyType;

}

@property (nonatomic,readonly) long long notifyType;              //@synthesize notifyType=_notifyType - In the implementation block
-(long long)notifyType;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithText:(id)arg1 simLabel:(id)arg2 notifyType:(long long)arg3 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/STKTextSessionData.h>

@interface STKNotifySessionData : STKTextSessionData {

	long long _notifyType;

}

@property (nonatomic,readonly) long long notifyType;              //@synthesize notifyType=_notifyType - In the implementation block
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)notifyType;
-(id)initWithText:(id)arg1 notifyType:(long long)arg2 ;
@end


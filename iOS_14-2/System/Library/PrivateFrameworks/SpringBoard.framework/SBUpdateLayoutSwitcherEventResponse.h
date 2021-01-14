/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@interface SBUpdateLayoutSwitcherEventResponse : SBSwitcherModifierEventResponse {

	unsigned long long _options;
	long long _updateMode;

}

@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long updateMode;                    //@synthesize updateMode=_updateMode - In the implementation block
-(id)initWithOptions:(unsigned long long)arg1 updateMode:(long long)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)options;
-(long long)updateMode;
-(long long)type;
@end


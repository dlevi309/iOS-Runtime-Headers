/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSString, NSDictionary;

@interface SBEmitStudyLogSwitcherModifierAction : SBSwitcherModifierAction {

	NSString* _name;
	NSDictionary* _payload;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(NSString *)name;
-(long long)type;
-(NSDictionary *)payload;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithStudyLogWithName:(id)arg1 payload:(id)arg2 ;
@end


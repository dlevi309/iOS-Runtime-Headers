/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class NSString, NSDictionary;

@interface SBEmitStudyLogSwitcherEventResponse : SBSwitcherModifierEventResponse {

	NSString* _name;
	NSDictionary* _payload;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(NSDictionary *)payload;
-(NSString *)name;
-(long long)type;
-(id)initWithStudyLogWithName:(id)arg1 payload:(id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBChainableModifierEventResponse.h>

@class NSString;

@interface SBChainableModifierTitledEventResponse : SBChainableModifierEventResponse {

	NSString* _title;

}

@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
+(id)responseWithTitle:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)title;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@class SBFLockScreenActionContext;

@interface CSAction : NSObject {

	long long _type;
	SBFLockScreenActionContext* _context;

}

@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SBFLockScreenActionContext * context;              //@synthesize context=_context - In the implementation block
+(id)actionWithType:(long long)arg1 ;
+(id)actionWithContext:(id)arg1 ;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(SBFLockScreenActionContext *)context;
-(void)setContext:(SBFLockScreenActionContext *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end


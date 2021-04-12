/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@class SBFLockScreenActionContext;

@interface CSAction : NSObject {

	long long _type;
	SBFLockScreenActionContext* _context;

}

@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SBFLockScreenActionContext * context;              //@synthesize context=_context - In the implementation block
+(id)actionWithContext:(id)arg1 ;
+(id)actionWithType:(long long)arg1 ;
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(SBFLockScreenActionContext *)context;
-(id)description;
-(long long)type;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setContext:(SBFLockScreenActionContext *)arg1 ;
@end


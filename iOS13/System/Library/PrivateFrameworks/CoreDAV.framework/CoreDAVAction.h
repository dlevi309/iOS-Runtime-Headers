/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/


@interface CoreDAVAction : NSObject {

	int _action;
	id _context;
	id _changeContext;
	BOOL _ignoresGuardianRestrictions;

}

@property (nonatomic,readonly) int action;                                  //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id context;                                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id changeContext;                              //@synthesize changeContext=_changeContext - In the implementation block
@property (assign,nonatomic) BOOL ignoresGuardianRestrictions;              //@synthesize ignoresGuardianRestrictions=_ignoresGuardianRestrictions - In the implementation block
-(id)description;
-(id)context;
-(int)action;
-(BOOL)ignoresGuardianRestrictions;
-(void)setIgnoresGuardianRestrictions:(BOOL)arg1 ;
-(id)initWithAction:(int)arg1 context:(id)arg2 ;
-(id)changeContext;
-(void)setChangeContext:(id)arg1 ;
@end


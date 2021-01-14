/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)action;
-(id)context;
-(id)description;
-(void)setIgnoresGuardianRestrictions:(BOOL)arg1 ;
-(id)initWithAction:(int)arg1 context:(id)arg2 ;
-(BOOL)ignoresGuardianRestrictions;
-(id)changeContext;
-(void)setChangeContext:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@interface _SFBarItemConfiguration : NSObject {

	BOOL _enabled;
	BOOL _hidden;
	/*^block*/id _menuProvider;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) id menuProvider;                              //@synthesize menuProvider=_menuProvider - In the implementation block
-(BOOL)isHidden;
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)menuProvider;
-(void)setMenuProvider:(id)arg1 ;
-(BOOL)isEnabled;
@end


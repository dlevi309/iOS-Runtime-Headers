/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString;

@interface _WBSSafariCyclerConfigurationCommand : NSObject {

	NSString* _name;
	NSString* _help;
	NSString* _usage;
	unsigned long long _minimumArgumentCount;
	unsigned long long _maximumArgumentCount;
	id _target;
	SEL _action;

}

@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * help;                               //@synthesize help=_help - In the implementation block
@property (nonatomic,copy) NSString * usage;                                       //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) unsigned long long minimumArgumentCount;              //@synthesize minimumArgumentCount=_minimumArgumentCount - In the implementation block
@property (assign,nonatomic) unsigned long long maximumArgumentCount;              //@synthesize maximumArgumentCount=_maximumArgumentCount - In the implementation block
@property (assign,nonatomic,__weak) id target;                                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                           //@synthesize action=_action - In the implementation block
-(id)init;
-(NSString *)name;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)setUsage:(NSString *)arg1 ;
-(NSString *)usage;
-(void)setAction:(SEL)arg1 ;
-(NSString *)help;
-(void)setArgumentCount:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 help:(id)arg2 ;
-(BOOL)invokeWithParameters:(id)arg1 ;
-(unsigned long long)minimumArgumentCount;
-(void)setMinimumArgumentCount:(unsigned long long)arg1 ;
-(unsigned long long)maximumArgumentCount;
-(void)setMaximumArgumentCount:(unsigned long long)arg1 ;
@end


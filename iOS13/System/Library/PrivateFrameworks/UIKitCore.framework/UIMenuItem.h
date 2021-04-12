/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface UIMenuItem : NSObject {

	BOOL _dontDismiss;
	NSString* _title;
	SEL _action;

}

@property (assign,nonatomic) BOOL dontDismiss;              //@synthesize dontDismiss=_dontDismiss - In the implementation block
@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(BOOL)dontDismiss;
-(void)setDontDismiss:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 ;
@end


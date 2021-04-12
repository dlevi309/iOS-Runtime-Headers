/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTitle:(NSString *)arg1 ;
-(SEL)action;
-(BOOL)dontDismiss;
-(void)setAction:(SEL)arg1 ;
-(void)setDontDismiss:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 ;
-(NSString *)title;
@end


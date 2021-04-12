/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface UIWebElementAction : NSObject {

	NSString* _title;
	/*^block*/id _actionHandler;
	/*^block*/id _dismissalHandler;
	int _type;

}

@property (nonatomic,readonly) int type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id dismissalHandler;              //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
+(id)standardElementActionWithType:(int)arg1 ;
+(id)standardElementActionWithType:(int)arg1 customTitle:(id)arg2 context:(id)arg3 ;
+(id)customElementActionWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(id)_title;
-(int)type;
-(id)dismissalHandler;
-(id)initWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 type:(int)arg3 ;
-(void)_runActionWithElement:(id)arg1 targetURL:(id)arg2 documentView:(id)arg3 interactionLocation:(CGPoint)arg4 ;
-(void)setDismissalHandler:(id)arg1 ;
-(void)dealloc;
@end


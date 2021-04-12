/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UIImage;

@interface _UICalloutBarSystemButtonDescription : NSObject {

	NSString* m_title;
	UIImage* m_image;
	SEL m_action;
	int m_type;
	BOOL m_requiresAuthenticatedTouch;
	/*^block*/id m_configurationBlock;

}

@property (nonatomic,readonly) SEL action; 
@property (nonatomic,copy) id configurationBlock; 
+(id)buttonDescriptionWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 requiresAuthenticatedTouch:(BOOL)arg4 ;
+(id)buttonDescriptionWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
+(id)buttonDescriptionWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(id)initWithTitle:(id)arg1 orImage:(id)arg2 action:(SEL)arg3 type:(int)arg4 requiresAuthenticatedTouch:(BOOL)arg5 ;
-(SEL)action;
-(id)materializeButtonInView:(id)arg1 ;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
@end


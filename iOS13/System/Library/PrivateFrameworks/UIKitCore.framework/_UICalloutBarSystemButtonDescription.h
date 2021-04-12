/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UIImage;

@interface _UICalloutBarSystemButtonDescription : NSObject {

	NSString* m_title;
	UIImage* m_image;
	SEL m_action;
	int m_type;
	/*^block*/id m_configurationBlock;

}

@property (nonatomic,readonly) SEL action; 
@property (nonatomic,copy) id configurationBlock; 
+(id)buttonDescriptionWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
+(id)buttonDescriptionWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(SEL)action;
-(id)initWithTitle:(id)arg1 orImage:(id)arg2 action:(SEL)arg3 type:(int)arg4 ;
-(id)configurationBlock;
-(id)materializeButtonInView:(id)arg1 ;
-(void)setConfigurationBlock:(id)arg1 ;
@end


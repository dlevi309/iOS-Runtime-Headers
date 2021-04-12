/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSString;

@interface IDSPopupPrompt : NSObject {

	NSString* _title;
	NSString* _message;

}

@property (nonatomic,retain) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 promptMessage:(id)arg2 ;
-(void)launchPromptWithButton:(id)arg1 defaultUrl:(id)arg2 alternateButton:(id)arg3 alternateUrl:(id)arg4 ;
@end


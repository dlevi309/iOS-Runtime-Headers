/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSArray, NSMutableDictionary, NSDictionary, NSString, SSDialogButton;

@interface SSDialog : NSObject {

	NSArray* _buttons;
	NSMutableDictionary* _dialogDictionary;

}

@property (nonatomic,readonly) NSDictionary * dialogDictionary; 
@property (nonatomic,readonly) NSString * dialogKind; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSArray * buttons; 
@property (nonatomic,retain) SSDialogButton * defaultButton; 
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)initWithDialogDictionary:(id)arg1 ;
-(id)init;
-(NSDictionary *)dialogDictionary;
-(SSDialogButton *)defaultButton;
-(void)setDefaultButton:(SSDialogButton *)arg1 ;
-(NSArray *)buttons;
-(void)setTitle:(NSString *)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)setButtons:(NSArray *)arg1 ;
-(NSString *)dialogKind;
-(NSString *)title;
-(void)dealloc;
@end


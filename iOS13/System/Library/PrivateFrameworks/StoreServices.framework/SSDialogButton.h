/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSDictionary, NSString;

@interface SSDialogButton : NSObject {

	NSDictionary* _actionDictionary;
	NSString* _title;

}

@property (nonatomic,readonly) id actionParameter; 
@property (nonatomic,readonly) NSString * buttonAction; 
@property (nonatomic,readonly) NSString * URLTarget; 
@property (nonatomic,copy,readonly) NSString * buttonTitle; 
+(id)buttonWithTitle:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)buttonTitle;
-(NSString *)buttonAction;
-(id)initWithTitle:(id)arg1 actionDictionary:(id)arg2 ;
-(id)valueForActionProperty:(id)arg1 ;
-(id)actionParameter;
-(NSString *)URLTarget;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)buttonTitle;
-(id)init;
-(id)initWithTitle:(id)arg1 actionDictionary:(id)arg2 ;
-(id)valueForActionProperty:(id)arg1 ;
-(id)actionParameter;
-(NSString *)buttonAction;
-(NSString *)URLTarget;
-(void)dealloc;
@end


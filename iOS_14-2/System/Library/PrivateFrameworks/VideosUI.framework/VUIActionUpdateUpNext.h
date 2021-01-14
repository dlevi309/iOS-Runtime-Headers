/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionUpdateUpNext : VUIAction {

	BOOL _confirmationShouldWaitCompletion;
	NSString* _state;
	NSString* _itemID;

}

@property (nonatomic,retain) NSString * state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * itemID;                                  //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) BOOL confirmationShouldWaitCompletion;              //@synthesize confirmationShouldWaitCompletion=_confirmationShouldWaitCompletion - In the implementation block
-(void)setItemID:(NSString *)arg1 ;
-(id)initWithContextData:(id)arg1 ;
-(NSString *)itemID;
-(void)setState:(NSString *)arg1 ;
-(NSString *)state;
-(BOOL)isAccountRequired;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)confirmationShouldWaitCompletion;
-(void)setConfirmationShouldWaitCompletion:(BOOL)arg1 ;
@end


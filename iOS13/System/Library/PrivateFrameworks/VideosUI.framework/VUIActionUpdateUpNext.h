/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionUpdateUpNext : VUIAction {

	NSString* _state;
	NSString* _itemID;

}

@property (nonatomic,retain) NSString * state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * itemID;              //@synthesize itemID=_itemID - In the implementation block
-(NSString *)state;
-(NSString *)itemID;
-(void)setState:(NSString *)arg1 ;
-(id)initWithContextData:(id)arg1 ;
-(void)setItemID:(NSString *)arg1 ;
-(BOOL)isAccountRequired;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


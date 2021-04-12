/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITapGestureRecognizer.h>

@class NSDictionary, NSString;

@interface HUStringInLabelTapGestureRecognizer : UITapGestureRecognizer {

	NSDictionary* _userInfo;
	NSString* _hitboxString;

}

@property (nonatomic,retain) NSString * hitboxString;                //@synthesize hitboxString=_hitboxString - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(NSDictionary *)userInfo;
-(BOOL)shouldReceiveEvent:(id)arg1 ;
-(NSString *)hitboxString;
-(BOOL)_didTapAttributedTextInLabel:(id)arg1 targetRange:(NSRange)arg2 event:(id)arg3 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 hitBoxString:(id)arg3 userInfo:(id)arg4 ;
-(void)setHitboxString:(NSString *)arg1 ;
@end


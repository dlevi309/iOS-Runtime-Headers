/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/


@class NSMutableArray, CNContact;

@interface _WBUDynamicMeCard : NSObject {

	NSMutableArray* _blocksPendingMeCard;
	CNContact* _me;
	BOOL _meCardExists;

}

@property (nonatomic,readonly) BOOL meCardExists;              //@synthesize meCardExists=_meCardExists - In the implementation block
+(id)_contactObjectComponentForString:(id)arg1 ;
-(id)init;
-(id)me;
-(void)_meCardChanged:(id)arg1 ;
-(id)valueForProperty:(id)arg1 contact:(id)arg2 ;
-(void)performWhenReady:(/*^block*/id)arg1 ;
-(BOOL)meCardExists;
@end


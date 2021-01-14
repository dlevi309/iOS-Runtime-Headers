/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)me;
-(id)init;
-(void)_meCardChanged:(id)arg1 ;
-(id)valueForProperty:(id)arg1 contact:(id)arg2 ;
-(void)performWhenReady:(/*^block*/id)arg1 ;
-(BOOL)meCardExists;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/


@interface MSPrimaryUserChangedEvent : NSObject {

	BOOL _changedToHomeOwner;
	BOOL _changedToUserNotInHome;
	BOOL _isAutomatic;

}

@property (assign,nonatomic) BOOL changedToHomeOwner;                  //@synthesize changedToHomeOwner=_changedToHomeOwner - In the implementation block
@property (assign,nonatomic) BOOL changedToUserNotInHome;              //@synthesize changedToUserNotInHome=_changedToUserNotInHome - In the implementation block
@property (assign,nonatomic) BOOL isAutomatic;                         //@synthesize isAutomatic=_isAutomatic - In the implementation block
-(BOOL)isAutomatic;
-(void)setIsAutomatic:(BOOL)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(void)setChangedToHomeOwner:(BOOL)arg1 ;
-(void)setChangedToUserNotInHome:(BOOL)arg1 ;
-(BOOL)changedToHomeOwner;
-(BOOL)changedToUserNotInHome;
@end


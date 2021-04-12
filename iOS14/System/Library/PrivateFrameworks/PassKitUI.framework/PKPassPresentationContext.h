/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol NSCopying;
@class NSArray;

@interface PKPassPresentationContext : NSObject {

	BOOL _fieldDetect;
	BOOL _postPayment;
	BOOL _forcePayment;
	BOOL _persistentCardEmulation;
	BOOL _wasAutomaticallySelected;
	BOOL _forcedFromButton;
	BOOL _limitServerLoad;
	NSArray* _additionalPassUniqueIdentifiers;
	id<NSCopying> _userInfo;

}

@property (assign,getter=isFieldDetect,nonatomic) BOOL fieldDetect;                                         //@synthesize fieldDetect=_fieldDetect - In the implementation block
@property (assign,getter=isPostPayment,nonatomic) BOOL postPayment;                                         //@synthesize postPayment=_postPayment - In the implementation block
@property (assign,getter=wantsForcedPayment,nonatomic) BOOL forcePayment;                                   //@synthesize forcePayment=_forcePayment - In the implementation block
@property (assign,getter=wantsPersistentCardEmulation,nonatomic) BOOL persistentCardEmulation;              //@synthesize persistentCardEmulation=_persistentCardEmulation - In the implementation block
@property (nonatomic,copy) NSArray * additionalPassUniqueIdentifiers;                                       //@synthesize additionalPassUniqueIdentifiers=_additionalPassUniqueIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL wasAutomaticallySelected;                                                 //@synthesize wasAutomaticallySelected=_wasAutomaticallySelected - In the implementation block
@property (assign,getter=wasForcedFromButton,nonatomic) BOOL forcedFromButton;                              //@synthesize forcedFromButton=_forcedFromButton - In the implementation block
@property (nonatomic,copy) id<NSCopying> userInfo;                                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) BOOL limitServerLoad;                                                          //@synthesize limitServerLoad=_limitServerLoad - In the implementation block
+(id)contextWithWasAutomaticallySelected:(BOOL)arg1 additionalPassUniqueIdentifiers:(id)arg2 ;
+(id)contextWithWasAutomaticallySelected:(BOOL)arg1 additionalPassUniqueIdentifiers:(id)arg2 userInfo:(id)arg3 ;
+(id)contextWithAdditionalPassUniqueIdentifiers:(id)arg1 ;
-(void)setUserInfo:(id<NSCopying>)arg1 ;
-(id<NSCopying>)userInfo;
-(id)description;
-(BOOL)isFieldDetect;
-(BOOL)wantsForcedPayment;
-(BOOL)wantsPersistentCardEmulation;
-(BOOL)isPostPayment;
-(void)setForcePayment:(BOOL)arg1 ;
-(void)setForcedFromButton:(BOOL)arg1 ;
-(void)setFieldDetect:(BOOL)arg1 ;
-(void)setLimitServerLoad:(BOOL)arg1 ;
-(void)setPersistentCardEmulation:(BOOL)arg1 ;
-(void)setPostPayment:(BOOL)arg1 ;
-(void)setAdditionalPassUniqueIdentifiers:(NSArray *)arg1 ;
-(void)setWasAutomaticallySelected:(BOOL)arg1 ;
-(NSArray *)additionalPassUniqueIdentifiers;
-(BOOL)wasAutomaticallySelected;
-(BOOL)wasForcedFromButton;
-(BOOL)limitServerLoad;
@end


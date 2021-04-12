/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol NSCopying;
@class NSArray;

@interface PKPassPresentationContext : NSObject {

	BOOL _animated;
	BOOL _fieldDetect;
	BOOL _postPayment;
	BOOL _forcePayment;
	BOOL _persistentCardEmulation;
	BOOL _wasAutomaticallySelected;
	BOOL _limitServerLoad;
	NSArray* _additionalPassUniqueIdentifiers;
	id<NSCopying> _userInfo;

}

@property (assign,nonatomic) BOOL animated;                                                                 //@synthesize animated=_animated - In the implementation block
@property (assign,getter=isFieldDetect,nonatomic) BOOL fieldDetect;                                         //@synthesize fieldDetect=_fieldDetect - In the implementation block
@property (assign,getter=isPostPayment,nonatomic) BOOL postPayment;                                         //@synthesize postPayment=_postPayment - In the implementation block
@property (assign,getter=wantsForcedPayment,nonatomic) BOOL forcePayment;                                   //@synthesize forcePayment=_forcePayment - In the implementation block
@property (assign,getter=wantsPersistentCardEmulation,nonatomic) BOOL persistentCardEmulation;              //@synthesize persistentCardEmulation=_persistentCardEmulation - In the implementation block
@property (nonatomic,copy) NSArray * additionalPassUniqueIdentifiers;                                       //@synthesize additionalPassUniqueIdentifiers=_additionalPassUniqueIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL wasAutomaticallySelected;                                                 //@synthesize wasAutomaticallySelected=_wasAutomaticallySelected - In the implementation block
@property (nonatomic,copy) id<NSCopying> userInfo;                                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) BOOL limitServerLoad;                                                          //@synthesize limitServerLoad=_limitServerLoad - In the implementation block
+(id)contextWithAnimation:(BOOL)arg1 ;
+(id)contextWithAnimation:(BOOL)arg1 wasAutomaticallySelected:(BOOL)arg2 additionalPassUniqueIdentifiers:(id)arg3 ;
+(id)contextWithAnimation:(BOOL)arg1 additionalPassUniqueIdentifiers:(id)arg2 ;
+(id)contextWithAnimation:(BOOL)arg1 wasAutomaticallySelected:(BOOL)arg2 additionalPassUniqueIdentifiers:(id)arg3 userInfo:(id)arg4 ;
-(id)description;
-(id<NSCopying>)userInfo;
-(void)setUserInfo:(id<NSCopying>)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(BOOL)isFieldDetect;
-(BOOL)wantsForcedPayment;
-(BOOL)wantsPersistentCardEmulation;
-(BOOL)isPostPayment;
-(void)setForcePayment:(BOOL)arg1 ;
-(void)setFieldDetect:(BOOL)arg1 ;
-(void)setLimitServerLoad:(BOOL)arg1 ;
-(void)setPersistentCardEmulation:(BOOL)arg1 ;
-(void)setPostPayment:(BOOL)arg1 ;
-(void)setAdditionalPassUniqueIdentifiers:(NSArray *)arg1 ;
-(void)setWasAutomaticallySelected:(BOOL)arg1 ;
-(NSArray *)additionalPassUniqueIdentifiers;
-(BOOL)wasAutomaticallySelected;
-(BOOL)limitServerLoad;
@end


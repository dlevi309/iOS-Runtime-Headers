/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentPreference.h>

@class NSOrderedSet, NSString, PKPaymentOptionsRecents;

@interface PKPaymentPreferenceContact : PKPaymentPreference {

	BOOL _showPhoneticName;
	NSOrderedSet* _contactKeys;
	NSString* _addNewTitle;
	NSString* _addExistingTitle;
	NSString* _editExistingTitle;
	unsigned long long _type;

}

@property (nonatomic,retain) PKPaymentOptionsRecents * paymentOptionsRecents; 
@property (nonatomic,copy) NSString * contactKey; 
@property (nonatomic,copy) NSOrderedSet * contactKeys;                                     //@synthesize contactKeys=_contactKeys - In the implementation block
@property (nonatomic,copy) NSString * addNewTitle;                                         //@synthesize addNewTitle=_addNewTitle - In the implementation block
@property (nonatomic,copy) NSString * addExistingTitle;                                    //@synthesize addExistingTitle=_addExistingTitle - In the implementation block
@property (nonatomic,copy) NSString * editExistingTitle;                                   //@synthesize editExistingTitle=_editExistingTitle - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL showPhoneticName;                                        //@synthesize showPhoneticName=_showPhoneticName - In the implementation block
-(NSString *)contactKey;
-(void)setType:(unsigned long long)arg1 ;
-(NSOrderedSet *)contactKeys;
-(NSString *)addNewTitle;
-(id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(BOOL)arg4 ;
-(void)setErrors:(id)arg1 forPreference:(id)arg2 ;
-(id)errorsForPreference:(id)arg1 ;
-(BOOL)preferenceObject:(id)arg1 representsContact:(id)arg2 ;
-(BOOL)supportsDeletion;
-(BOOL)showPhoneticName;
-(void)setShowPhoneticName:(BOOL)arg1 ;
-(PKPaymentOptionsRecents *)paymentOptionsRecents;
-(void)setPaymentOptionsRecents:(PKPaymentOptionsRecents *)arg1 ;
-(void)_removeDuplicates;
-(void)setContactKey:(NSString *)arg1 ;
-(void)mergeRecentsAndMeCard;
-(long long)indexOfContact:(id)arg1 ;
-(void)setContactKeys:(NSOrderedSet *)arg1 ;
-(void)setAddNewTitle:(NSString *)arg1 ;
-(NSString *)addExistingTitle;
-(void)setAddExistingTitle:(NSString *)arg1 ;
-(NSString *)editExistingTitle;
-(void)setEditExistingTitle:(NSString *)arg1 ;
-(unsigned long long)type;
@end


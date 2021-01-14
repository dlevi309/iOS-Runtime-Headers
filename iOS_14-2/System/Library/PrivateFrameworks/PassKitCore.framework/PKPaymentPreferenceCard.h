/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentPreference.h>

@interface PKPaymentPreferenceCard : PKPaymentPreference {

	BOOL _supportsNullSelection;

}

@property (assign,nonatomic) BOOL supportsNullSelection;              //@synthesize supportsNullSelection=_supportsNullSelection - In the implementation block
-(id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(BOOL)arg4 ;
-(void)setErrors:(id)arg1 forPreference:(id)arg2 ;
-(id)errorsForPreference:(id)arg1 ;
-(BOOL)supportsDeletion;
-(BOOL)supportsNullSelection;
-(void)setSupportsNullSelection:(BOOL)arg1 ;
@end


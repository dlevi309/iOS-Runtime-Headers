/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTableViewCell.h>

@class UIColor;

@interface PKPaymentPreferenceCell : PKTableViewCell {

	UIColor* _errorColor;
	BOOL _hasError;

}

@property (assign,nonatomic) BOOL hasError;              //@synthesize hasError=_hasError - In the implementation block
-(void)setHasError:(BOOL)arg1 ;
-(void)prepareForReuse;
-(BOOL)hasError;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)dealloc;
@end


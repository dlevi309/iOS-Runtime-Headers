/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTableViewCell.h>

@class UIColor;

@interface PKPaymentPreferenceCell : PKTableViewCell {

	UIColor* _errorColor;
	BOOL _hasError;

}

@property (assign,nonatomic) BOOL hasError;              //@synthesize hasError=_hasError - In the implementation block
-(void)dealloc;
-(void)prepareForReuse;
-(BOOL)hasError;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
@end


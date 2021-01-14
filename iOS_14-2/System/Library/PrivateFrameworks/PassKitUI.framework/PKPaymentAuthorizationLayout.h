/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSString;

@interface PKPaymentAuthorizationLayout : NSObject {

	BOOL _isAMPPayment;
	BOOL _isInstallment;
	BOOL _isPaymentSummaryPinned;
	BOOL _shouldSuppressTotal;
	long long _style;
	double _contentHorizontalMargin;
	double _valueLeftMargin;
	double _glyphDimension;
	unsigned long long _requestType;
	unsigned long long _requestor;
	NSString* _localizedNavigationTitle;

}

@property (nonatomic,readonly) long long style;                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) double contentHorizontalMargin;                   //@synthesize contentHorizontalMargin=_contentHorizontalMargin - In the implementation block
@property (nonatomic,readonly) double valueLeftMargin;                           //@synthesize valueLeftMargin=_valueLeftMargin - In the implementation block
@property (nonatomic,readonly) double glyphDimension;                            //@synthesize glyphDimension=_glyphDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType;                   //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) unsigned long long requestor;                     //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,readonly) BOOL isAMPPayment;                                //@synthesize isAMPPayment=_isAMPPayment - In the implementation block
@property (nonatomic,readonly) BOOL isInstallment;                               //@synthesize isInstallment=_isInstallment - In the implementation block
@property (nonatomic,readonly) BOOL isPaymentSummaryPinned;                      //@synthesize isPaymentSummaryPinned=_isPaymentSummaryPinned - In the implementation block
@property (nonatomic,readonly) NSString * localizedNavigationTitle;              //@synthesize localizedNavigationTitle=_localizedNavigationTitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressTotal;                         //@synthesize shouldSuppressTotal=_shouldSuppressTotal - In the implementation block
-(id)initWithStyle:(long long)arg1 paymentRequest:(id)arg2 ;
-(unsigned long long)requestType;
-(double)valueLeftMargin;
-(BOOL)isAMPPayment;
-(BOOL)isInstallment;
-(BOOL)shouldSuppressTotal;
-(unsigned long long)requestor;
-(BOOL)isPaymentSummaryPinned;
-(NSString *)localizedNavigationTitle;
-(double)glyphDimension;
-(long long)style;
-(double)contentHorizontalMargin;
@end


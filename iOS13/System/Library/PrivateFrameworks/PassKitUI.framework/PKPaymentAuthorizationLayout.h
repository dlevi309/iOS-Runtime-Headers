/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSString;

@interface PKPaymentAuthorizationLayout : NSObject {

	BOOL _isAMPPayment;
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
@property (nonatomic,readonly) NSString * localizedNavigationTitle;              //@synthesize localizedNavigationTitle=_localizedNavigationTitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressTotal;                         //@synthesize shouldSuppressTotal=_shouldSuppressTotal - In the implementation block
-(long long)style;
-(unsigned long long)requestType;
-(double)contentHorizontalMargin;
-(unsigned long long)requestor;
-(NSString *)localizedNavigationTitle;
-(id)initWithStyle:(long long)arg1 paymentRequest:(id)arg2 ;
-(double)valueLeftMargin;
-(BOOL)isAMPPayment;
-(BOOL)shouldSuppressTotal;
-(double)glyphDimension;
@end


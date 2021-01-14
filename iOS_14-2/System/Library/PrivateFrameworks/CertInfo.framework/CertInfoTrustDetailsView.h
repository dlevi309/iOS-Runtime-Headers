/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, CertInfoCertificateDetailsView;

@interface CertInfoTrustDetailsView : UIView {

	NSArray* _certificateViews;
	CertInfoCertificateDetailsView* _currentCertView;

}
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 trustProperties:(id)arg2 ;
-(void)_appendRemainingCertificates;
@end


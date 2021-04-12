/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


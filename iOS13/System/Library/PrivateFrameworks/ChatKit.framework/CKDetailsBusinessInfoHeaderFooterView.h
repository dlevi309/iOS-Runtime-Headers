/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/CKDetailsHeaderFooterView.h>

@class CKBusinessInfoView, NSString;

@interface CKDetailsBusinessInfoHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView> {

	CKBusinessInfoView* _businessInfoView;

}

@property (nonatomic,retain) CKBusinessInfoView * businessInfoView;              //@synthesize businessInfoView=_businessInfoView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(CKBusinessInfoView *)businessInfoView;
-(void)setBusinessInfoView:(CKBusinessInfoView *)arg1 ;
@end


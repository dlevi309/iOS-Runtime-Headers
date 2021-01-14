/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKBusinessInfoView *)businessInfoView;
-(void)setBusinessInfoView:(CKBusinessInfoView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end


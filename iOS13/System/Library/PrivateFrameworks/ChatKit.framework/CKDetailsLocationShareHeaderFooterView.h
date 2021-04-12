/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/CKDetailsHeaderFooterView.h>

@class UITextView, NSString;

@interface CKDetailsLocationShareHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView> {

	UITextView* _locationSharingTextView;

}

@property (nonatomic,retain) UITextView * locationSharingTextView;              //@synthesize locationSharingTextView=_locationSharingTextView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(UITextView *)locationSharingTextView;
-(void)setLocationSharingTextView:(UITextView *)arg1 ;
@end


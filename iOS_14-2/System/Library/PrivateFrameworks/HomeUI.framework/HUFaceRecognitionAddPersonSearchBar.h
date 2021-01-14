/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUSearchBar.h>

@class UITextField, UIImageView, NSArray, UIView, NSString;

@interface HUFaceRecognitionAddPersonSearchBar : UIView <HUSearchBar> {

	UIImageView* _faceCropView;
	UITextField* _searchTextField;
	NSArray* _constraints;
	UIView* _separatorView;

}

@property (nonatomic,retain) NSArray * constraints;                        //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                     //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) UIImageView * faceCropView;                 //@synthesize faceCropView=_faceCropView - In the implementation block
@property (nonatomic,readonly) UITextField * searchTextField;              //@synthesize searchTextField=_searchTextField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(UIView *)separatorView;
-(id)init;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UITextField *)searchTextField;
-(UIImageView *)faceCropView;
@end


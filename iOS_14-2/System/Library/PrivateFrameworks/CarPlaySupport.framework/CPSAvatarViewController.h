/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSEntityUpdateSupporting.h>

@protocol CPEntityImageProviding;
@class UIImageView, NSArray, NSString;

@interface CPSAvatarViewController : UIViewController <CPSEntityUpdateSupporting> {

	id<CPEntityImageProviding> _entity;
	UIImageView* _avatarImageView;
	NSArray* _layoutConstraints;

}

@property (nonatomic,retain) id<CPEntityImageProviding> entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) UIImageView * avatarImageView;                //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                    //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEntity:(id)arg1 ;
-(void)updateViewConstraints;
-(void)setEntity:(id<CPEntityImageProviding>)arg1 ;
-(id<CPEntityImageProviding>)entity;
-(id)preferredFocusEnvironments;
-(void)resetLayoutConstraints;
-(void)setupLayoutConstraints;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(UIImageView *)avatarImageView;
-(void)setupViews;
-(void)updateViews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateWithEntity:(id)arg1 ;
@end


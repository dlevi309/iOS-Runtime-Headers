/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <UIKit/UITableViewDelegate.h>

@protocol UITableViewDelegate;
@class NSObject, UITableView, AAFamilyMember, AAUIProfilePictureStore, NSString;

@interface FAFamilyMemberDetailsPageSurrogate : NSObject <UITableViewDelegate> {

	NSObject*<UITableViewDelegate> _remoteTableViewController;
	UITableView* _remoteTableView;
	AAFamilyMember* _familyMember;
	AAUIProfilePictureStore* _pictureStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)initWithPage:(id)arg1 forPerson:(id)arg2 account:(id)arg3 store:(id)arg4 ;
@end


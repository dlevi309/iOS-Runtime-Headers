/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <UIKit/UITableViewDelegate.h>

@protocol UITableViewDelegate;
@class NSObject, UITableView, FAFamilyMember, AAUIProfilePictureStore, NSString;

@interface FAFamilyMemberDetailsPageSurrogate : NSObject <UITableViewDelegate> {

	NSObject*<UITableViewDelegate> _remoteTableViewController;
	UITableView* _remoteTableView;
	FAFamilyMember* _familyMember;
	AAUIProfilePictureStore* _pictureStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithPage:(id)arg1 forPerson:(id)arg2 account:(id)arg3 store:(id)arg4 ;
@end


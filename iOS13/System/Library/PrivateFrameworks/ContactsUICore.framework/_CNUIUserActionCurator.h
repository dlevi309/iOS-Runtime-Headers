/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIUserActionCurator.h>

@protocol CNLSApplicationWorkspace;
@class CNContactStore, NSString;

@interface _CNUIUserActionCurator : NSObject <CNUIUserActionCurator> {

	CNContactStore* _contactStore;
	id<CNLSApplicationWorkspace> _applicationWorkspace;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) id<CNLSApplicationWorkspace> applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 ;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(void)setApplicationWorkspace:(id<CNLSApplicationWorkspace>)arg1 ;
-(id)curateUserAction:(id)arg1 ;
@end


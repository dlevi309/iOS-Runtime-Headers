/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 ;
-(void)setApplicationWorkspace:(id<CNLSApplicationWorkspace>)arg1 ;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(id)curateUserAction:(id)arg1 ;
@end


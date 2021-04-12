/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivityProvider.h>

@protocol SXMailPresenter, SXContactsPresenter;
@class NSString;

@interface SXEmailActionActivityProvider : NSObject <SXActionActivityProvider> {

	id<SXMailPresenter> _mailPresenter;
	id<SXContactsPresenter> _contactsPresenter;

}

@property (nonatomic,readonly) id<SXMailPresenter> mailPresenter;                      //@synthesize mailPresenter=_mailPresenter - In the implementation block
@property (nonatomic,readonly) id<SXContactsPresenter> contactsPresenter;              //@synthesize contactsPresenter=_contactsPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityGroupForAction:(id)arg1 ;
-(id<SXMailPresenter>)mailPresenter;
-(void)composeMailTo:(id)arg1 subject:(id)arg2 ;
-(void)addToContacts:(id)arg1 ;
-(id<SXContactsPresenter>)contactsPresenter;
-(id)initWithMailPresenter:(id)arg1 contactsPresenter:(id)arg2 ;
@end


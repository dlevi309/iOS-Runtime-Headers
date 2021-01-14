/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)composeMailTo:(id)arg1 subject:(id)arg2 ;
-(id)activityGroupForAction:(id)arg1 ;
-(id<SXContactsPresenter>)contactsPresenter;
-(id)initWithMailPresenter:(id)arg1 contactsPresenter:(id)arg2 ;
-(id<SXMailPresenter>)mailPresenter;
-(void)addToContacts:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsFoundation/CNTask.h>

@protocol CNAvatarCacheChangeListenerDelegate;
@class NSArray;

@interface CNAvatarChangeHistoryReportingTask : CNTask {

	NSArray* _identifiers;
	id<CNAvatarCacheChangeListenerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSArray * identifiers;                                    //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,readonly) id<CNAvatarCacheChangeListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSArray *)identifiers;
-(id<CNAvatarCacheChangeListenerDelegate>)delegate;
-(id)run:(id*)arg1 ;
-(id)initWithIdentifiers:(id)arg1 delegate:(id)arg2 ;
@end


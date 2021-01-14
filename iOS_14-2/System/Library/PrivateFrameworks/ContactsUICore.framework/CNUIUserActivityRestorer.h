/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@protocol CNUIUserActivityRestorerDelegate;
@class CNContactStore;

@interface CNUIUserActivityRestorer : NSObject {

	id<CNUIUserActivityRestorerDelegate> _delegate;
	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                   //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic,__weak) id<CNUIUserActivityRestorerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)log;
-(CNContactStore *)contactStore;
-(id<CNUIUserActivityRestorerDelegate>)delegate;
-(void)setDelegate:(id<CNUIUserActivityRestorerDelegate>)arg1 ;
-(id)initWithContactStore:(id)arg1 ;
-(BOOL)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)arg1 ;
-(BOOL)restoreUserActivity:(id)arg1 ;
@end


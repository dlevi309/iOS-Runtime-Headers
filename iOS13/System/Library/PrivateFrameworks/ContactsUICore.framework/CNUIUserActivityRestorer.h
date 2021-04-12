/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<CNUIUserActivityRestorerDelegate>)delegate;
-(void)setDelegate:(id<CNUIUserActivityRestorerDelegate>)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(BOOL)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)arg1 ;
-(BOOL)restoreUserActivity:(id)arg1 ;
@end


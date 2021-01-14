/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactDataSourceDelegate.h>

@protocol CNContactDataSourceDelegate;
@class NSString;

@interface CNContactDataSourceSafeDelegate : NSObject <CNContactDataSourceDelegate> {

	id<CNContactDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CNContactDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactDataSourceDidChange:(id)arg1 ;
-(id<CNContactDataSourceDelegate>)delegate;
-(void)setDelegate:(id<CNContactDataSourceDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end


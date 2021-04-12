/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class VSCredentialEntryViewModel, NSString;

@interface VSCredentialEntryButton : NSObject {

	VSCredentialEntryViewModel* _owningViewModel;
	NSString* _title;

}

@property (assign,nonatomic,__weak) VSCredentialEntryViewModel * owningViewModel;              //@synthesize owningViewModel=_owningViewModel - In the implementation block
@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setOwningViewModel:(VSCredentialEntryViewModel *)arg1 ;
-(VSCredentialEntryViewModel *)owningViewModel;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class VSCredentialEntryViewModel, NSString;

@interface VSCredentialEntryButton : NSObject {

	VSCredentialEntryViewModel* _owningViewModel;
	NSString* _title;

}

@property (assign,nonatomic,__weak) VSCredentialEntryViewModel * owningViewModel;              //@synthesize owningViewModel=_owningViewModel - In the implementation block
@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setOwningViewModel:(VSCredentialEntryViewModel *)arg1 ;
-(VSCredentialEntryViewModel *)owningViewModel;
@end


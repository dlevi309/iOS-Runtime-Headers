/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@interface CNUICoreWhitelistedContactsControllerOptions : NSObject {

	BOOL _shouldPrepopulateEmptyWhitelist;
	BOOL _shouldRequireConfirmationOfChanges;

}

@property (nonatomic,readonly) BOOL shouldPrepopulateEmptyWhitelist;                 //@synthesize shouldPrepopulateEmptyWhitelist=_shouldPrepopulateEmptyWhitelist - In the implementation block
@property (nonatomic,readonly) BOOL shouldRequireConfirmationOfChanges;              //@synthesize shouldRequireConfirmationOfChanges=_shouldRequireConfirmationOfChanges - In the implementation block
+(id)iosOptions;
+(id)macOptions;
-(id)init;
-(id)initWithShouldPrepopulateEmptyWhitelist:(BOOL)arg1 shouldRequireConfirmationOfChanges:(BOOL)arg2 ;
-(BOOL)shouldPrepopulateEmptyWhitelist;
-(BOOL)shouldRequireConfirmationOfChanges;
@end


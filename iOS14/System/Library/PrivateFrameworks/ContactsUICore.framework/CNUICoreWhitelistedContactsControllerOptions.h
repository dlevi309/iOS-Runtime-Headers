/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)macOptionsLocal;
-(id)init;
-(id)initWithShouldPrepopulateEmptyWhitelist:(BOOL)arg1 shouldRequireConfirmationOfChanges:(BOOL)arg2 ;
-(BOOL)shouldPrepopulateEmptyWhitelist;
-(BOOL)shouldRequireConfirmationOfChanges;
@end


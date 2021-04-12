/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSArray;

@interface PXCMMComposeRecipientSelectionSnapshot : NSObject {

	NSArray* _selectedComposeRecipients;
	NSArray* _selectedRecipients;

}

@property (nonatomic,copy,readonly) NSArray * selectedComposeRecipients;              //@synthesize selectedComposeRecipients=_selectedComposeRecipients - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectedRecipients;                     //@synthesize selectedRecipients=_selectedRecipients - In the implementation block
+(id)new;
-(id)init;
-(id)initWithSelectedComposeRecipients:(id)arg1 selectedRecipients:(id)arg2 ;
-(NSArray *)selectedComposeRecipients;
-(NSArray *)selectedRecipients;
@end


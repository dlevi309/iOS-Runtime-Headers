/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXCMMComposeRecipientValidationManagerDelegate;
@class NSMutableDictionary, PXIDSAddressQueryController, PXCMMComposeRecipientDataSource;

@interface PXCMMComposeRecipientValidationManager : NSObject {

	NSMutableDictionary* _composeRecipientsToQuery;
	NSMutableDictionary* _queryAddressesToComposeRecipientQuery;
	PXIDSAddressQueryController* _addressQueryController;
	PXCMMComposeRecipientDataSource* _dataSource;
	id<PXCMMComposeRecipientValidationManagerDelegate> _delegate;

}

@property (nonatomic,readonly) PXCMMComposeRecipientDataSource * dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMComposeRecipientValidationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)new;
-(id)init;
-(id<PXCMMComposeRecipientValidationManagerDelegate>)delegate;
-(id)initWithDataSource:(id)arg1 ;
-(void)_requestValidationForComposeRecipientsAtIndexes:(id)arg1 ;
-(long long)validationTypeForComposeRecipient:(id)arg1 ;
-(PXCMMComposeRecipientDataSource *)dataSource;
-(void)setDelegate:(id<PXCMMComposeRecipientValidationManagerDelegate>)arg1 ;
-(void)setDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(void)_handleAddressQueryResults:(id)arg1 error:(id)arg2 ;
@end


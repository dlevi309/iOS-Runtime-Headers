/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol ICTableAttachmentProviderDelegate;
@class ICAttachment, ICTable, CRTTCompatibleDocument;

@interface ICTableAttachmentProvider : NSObject {

	BOOL _needsToUpdateTableFromBackgroundAttachment;
	ICAttachment* _attachment;
	ICTable* _table;
	CRTTCompatibleDocument* _tableDoc;
	id<ICTableAttachmentProviderDelegate> _delegate;
	ICAttachment* _backgroundAttachment;

}

@property (nonatomic,retain) ICAttachment * backgroundAttachment;                                //@synthesize backgroundAttachment=_backgroundAttachment - In the implementation block
@property (nonatomic,readonly) CRTTCompatibleDocument * tableDoc;                                //@synthesize tableDoc=_tableDoc - In the implementation block
@property (assign,nonatomic,__weak) id<ICTableAttachmentProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) ICAttachment * attachment;                                   //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) ICTable * table;                                                  //@synthesize table=_table - In the implementation block
@property (assign,nonatomic) BOOL isBeingEditedLocallyOnDevice; 
@property (assign,nonatomic) BOOL needsToUpdateTableFromBackgroundAttachment;                    //@synthesize needsToUpdateTableFromBackgroundAttachment=_needsToUpdateTableFromBackgroundAttachment - In the implementation block
+(id)providerMapping;
+(id)mergeNotificationRegister;
+(id)sharedProviderForAttachment:(id)arg1 ;
+(id)backgroundManagedObjectContext;
+(void)notifyProviderForRefreshToAttachment:(id)arg1 ;
+(void)saveAttachmentOnMainThread:(id)arg1 ;
-(id<ICTableAttachmentProviderDelegate>)delegate;
-(void)setDelegate:(id<ICTableAttachmentProviderDelegate>)arg1 ;
-(ICTable *)table;
-(ICAttachment *)attachment;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICAttachment *)backgroundAttachment;
-(void)setBackgroundAttachment:(ICAttachment *)arg1 ;
-(CRTTCompatibleDocument *)tableDoc;
-(void)didRefreshBackgroundTableAttachment:(id)arg1 ;
-(BOOL)isBeingEditedLocallyOnDevice;
-(void)setIsBeingEditedLocallyOnDevice:(BOOL)arg1 ;
-(void)setNeedsToUpdateTableFromBackgroundAttachment:(BOOL)arg1 ;
-(void)updateTableFromMOC;
-(BOOL)needsToUpdateTableFromBackgroundAttachment;
-(void)notifyDelegateTableAttachmentWillMerge;
-(void)notifyDelegateTableAttachmentDidMerge;
-(void)setTableFromDocument:(id)arg1 ;
@end


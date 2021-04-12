/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/ICAttachmentModel.h>

@class ICTableVersionedDocument, ICTable;

@interface ICAttachmentTableModel : ICAttachmentModel {

	ICTableVersionedDocument* _tableDocument;

}

@property (nonatomic,retain) ICTableVersionedDocument * tableDocument;              //@synthesize tableDocument=_tableDocument - In the implementation block
@property (nonatomic,readonly) ICTable * table; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
+(id)tableFromAttributedString:(id)arg1 managedObjectContext:(id)arg2 ;
-(ICTable *)table;
-(id)localizedFallbackTitle;
-(id)searchableTextContentInNote;
-(void)attachmentWillTurnIntoFault;
-(void)attachmentWillRefresh:(BOOL)arg1 ;
-(void)attachmentDidRefresh:(BOOL)arg1 ;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(BOOL)providesTextContentInNote;
-(id)textContentInNote;
-(void)noteWillAddOrRemovePassword;
-(void)regenerateTextContentInNote;
-(void)attachmentAwakeFromFetch;
-(void)willMarkAttachmentForDeletion;
-(BOOL)isReadyToPresent;
-(id)localizedFallbackSubtitleIOS;
-(id)localizedFallbackSubtitleMac;
-(void)mergeTablePrimitiveData;
-(ICTableVersionedDocument *)tableDocument;
-(id)stringsAtRow:(unsigned long long)arg1 ;
-(void)updateAttachmentByMergingWithTableData:(id)arg1 ;
-(void)setTableDocument:(ICTableVersionedDocument *)arg1 ;
@end


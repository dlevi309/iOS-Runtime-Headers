/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)regenerateTextContentInNote;
-(void)willMarkAttachmentForDeletion;
-(BOOL)isReadyToPresent;
-(id)localizedFallbackSubtitleIOS;
-(id)localizedFallbackSubtitleMac;
-(id)searchableTextContentInNote;
-(BOOL)providesTextContentInNote;
-(id)textContentInNote;
-(void)mergeTablePrimitiveData;
-(ICTableVersionedDocument *)tableDocument;
-(id)stringsAtRow:(unsigned long long)arg1 ;
-(void)updateAttachmentByMergingWithTableData:(id)arg1 ;
-(void)setTableDocument:(ICTableVersionedDocument *)arg1 ;
-(id)localizedFallbackTitle;
-(void)noteWillAddOrRemovePassword;
-(void)attachmentWillTurnIntoFault;
-(void)attachmentWillRefresh:(BOOL)arg1 ;
-(void)attachmentDidRefresh:(BOOL)arg1 ;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(void)attachmentAwakeFromFetch;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <Foundation/NSOperation.h>

@class NSManagedObjectID, ICBaseTextAttachment, ICAttachment;

@interface ICDrawingConversionOperation : NSOperation {

	BOOL _isAutomatic;
	NSManagedObjectID* _attachmentID;
	NSManagedObjectID* _finalAttachmentID;
	ICBaseTextAttachment* _textAttachment;
	ICAttachment* _attachment;

}

@property (nonatomic,retain) ICAttachment * attachment;                            //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) BOOL isAutomatic;                                   //@synthesize isAutomatic=_isAutomatic - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * attachmentID;                   //@synthesize attachmentID=_attachmentID - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * finalAttachmentID;              //@synthesize finalAttachmentID=_finalAttachmentID - In the implementation block
@property (nonatomic,retain) ICBaseTextAttachment * textAttachment;                //@synthesize textAttachment=_textAttachment - In the implementation block
-(BOOL)isAutomatic;
-(void)setTextAttachment:(ICBaseTextAttachment *)arg1 ;
-(ICAttachment *)attachment;
-(void)main;
-(ICBaseTextAttachment *)textAttachment;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(NSManagedObjectID *)attachmentID;
-(id)initWithAttachment:(id)arg1 textAttachment:(id)arg2 automatic:(BOOL)arg3 ;
-(NSManagedObjectID *)finalAttachmentID;
@end


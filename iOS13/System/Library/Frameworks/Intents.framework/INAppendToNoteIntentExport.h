/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INNote, INNoteContent;


@protocol INAppendToNoteIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INNote * targetNote; 
@property (nonatomic,copy) INNoteContent * content; 
@required
-(id)init;
-(INNoteContent *)content;
-(void)setContent:(id)arg1;
-(INNote *)targetNote;
-(void)setTargetNote:(id)arg1;

@end


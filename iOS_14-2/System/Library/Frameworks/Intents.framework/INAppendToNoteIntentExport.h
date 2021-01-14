/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INNote, INNoteContent;


@protocol INAppendToNoteIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INNote * targetNote; 
@property (nonatomic,copy) INNoteContent * content; 
@required
-(INNoteContent *)content;
-(id)init;
-(void)setContent:(id)arg1;
-(INNote *)targetNote;
-(void)setTargetNote:(id)arg1;

@end


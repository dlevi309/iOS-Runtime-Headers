/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@interface ICNoteFileFormat : NSObject
+(id)fileUTType;
+(id)pathExtension;
+(BOOL)importNoteFromURL:(id)arg1 toNote:(id)arg2 error:(id*)arg3 ;
+(void)exportNote:(id)arg1 toURL:(id)arg2 ;
-(id)allowedFileTypes;
-(BOOL)canHandleFileURL:(id)arg1 ;
-(void)cancelParsing;
-(void)parseFileURL:(id)arg1 newNoteBlock:(/*^block*/id)arg2 updatedNoteBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 completedParsingBlock:(/*^block*/id)arg5 ;
-(void)totalNotesFoundAtFileURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end


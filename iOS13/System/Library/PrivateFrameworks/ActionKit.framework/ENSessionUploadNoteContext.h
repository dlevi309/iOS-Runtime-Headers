/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class EDAMNote, ENNoteRef, ENNotebook, ENNoteStoreClient;

@interface ENSessionUploadNoteContext : NSObject {

	EDAMNote* _note;
	ENNoteRef* _refToReplace;
	ENNotebook* _notebook;
	long long _policy;
	/*^block*/id _completion;
	/*^block*/id _progress;
	ENNoteStoreClient* _noteStore;
	ENNoteRef* _noteRef;

}

@property (nonatomic,retain) EDAMNote * note;                            //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) ENNoteRef * refToReplace;                   //@synthesize refToReplace=_refToReplace - In the implementation block
@property (nonatomic,retain) ENNotebook * notebook;                      //@synthesize notebook=_notebook - In the implementation block
@property (assign,nonatomic) long long policy;                           //@synthesize policy=_policy - In the implementation block
@property (nonatomic,copy) id completion;                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id progress;                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) ENNoteStoreClient * noteStore;              //@synthesize noteStore=_noteStore - In the implementation block
@property (nonatomic,retain) ENNoteRef * noteRef;                        //@synthesize noteRef=_noteRef - In the implementation block
-(id)progress;
-(long long)policy;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setPolicy:(long long)arg1 ;
-(void)setProgress:(id)arg1 ;
-(EDAMNote *)note;
-(void)setNote:(EDAMNote *)arg1 ;
-(ENNotebook *)notebook;
-(void)setNotebook:(ENNotebook *)arg1 ;
-(ENNoteRef *)noteRef;
-(void)setNoteRef:(ENNoteRef *)arg1 ;
-(ENNoteStoreClient *)noteStore;
-(void)setRefToReplace:(ENNoteRef *)arg1 ;
-(ENNoteRef *)refToReplace;
-(void)setNoteStore:(ENNoteStoreClient *)arg1 ;
@end


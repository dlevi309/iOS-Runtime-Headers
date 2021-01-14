/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletion:(id)arg1 ;
-(void)setPolicy:(long long)arg1 ;
-(id)progress;
-(long long)policy;
-(void)setNote:(EDAMNote *)arg1 ;
-(id)completion;
-(EDAMNote *)note;
-(void)setProgress:(id)arg1 ;
-(ENNoteRef *)noteRef;
-(ENNotebook *)notebook;
-(void)setNotebook:(ENNotebook *)arg1 ;
-(void)setNoteRef:(ENNoteRef *)arg1 ;
-(ENNoteStoreClient *)noteStore;
-(void)setRefToReplace:(ENNoteRef *)arg1 ;
-(ENNoteRef *)refToReplace;
-(void)setNoteStore:(ENNoteStoreClient *)arg1 ;
@end


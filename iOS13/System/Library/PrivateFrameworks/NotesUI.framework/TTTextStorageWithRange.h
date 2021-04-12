/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, ICNote, NSManagedObjectContext, TTTextStorage, NSString;

@interface TTTextStorageWithRange : NSObject <NSItemProviderWriting> {

	ICNote* _note;
	NSManagedObjectContext* _workerContext;
	ICNote* _workerContextNote;
	TTTextStorage* _textStorage;
	NSRange _range;

}

@property (nonatomic,retain) ICNote * note;                                                        //@synthesize note=_note - In the implementation block
@property (assign,nonatomic) NSRange range;                                                        //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * workerContext;                               //@synthesize workerContext=_workerContext - In the implementation block
@property (nonatomic,retain) ICNote * workerContextNote;                                           //@synthesize workerContextNote=_workerContextNote - In the implementation block
@property (nonatomic,retain) TTTextStorage * textStorage;                                          //@synthesize textStorage=_textStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
+(id)writableTypeIdentifiersForItemProvider;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSRange)range;
-(TTTextStorage *)textStorage;
-(void)setTextStorage:(TTTextStorage *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(ICNote *)note;
-(void)setNote:(ICNote *)arg1 ;
-(void)setWorkerContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)workerContext;
-(void)setWorkerContextNote:(ICNote *)arg1 ;
-(ICNote *)workerContextNote;
-(id)initWithTextStorage:(id)arg1 range:(NSRange)arg2 note:(id)arg3 ;
-(void)prepareTextStorage;
@end


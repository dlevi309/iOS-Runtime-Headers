/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writableTypeIdentifiersForItemProvider;
-(void)setRange:(NSRange)arg1 ;
-(id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSRange)range;
-(void)setNote:(ICNote *)arg1 ;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(ICNote *)note;
-(void)setTextStorage:(TTTextStorage *)arg1 ;
-(TTTextStorage *)textStorage;
-(void)setWorkerContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)workerContext;
-(void)setWorkerContextNote:(ICNote *)arg1 ;
-(ICNote *)workerContextNote;
-(id)initWithTextStorage:(id)arg1 range:(NSRange)arg2 note:(id)arg3 ;
-(void)prepareTextStorage;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@interface PKVersionedDocument : NSObject {

	Document* _documentArchive;

}

@property (assign,nonatomic) Document* documentArchive;                            //@synthesize documentArchive=_documentArchive - In the implementation block
@property (nonatomic,readonly) unsigned long long futureVersionCount; 
+(unsigned)serializationVersion;
+(unsigned)versionedDocumentSerializationVersion;
+(unsigned)minimumSupportedVersion;
-(id)serialize;
-(void)saveToArchive:(Document*)arg1 ;
-(id)initWithArchive:(const Document*)arg1 ;
-(id)init;
-(BOOL)loadData:(id)arg1 ;
-(BOOL)loadDocumentArchive:(Document*)arg1 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(Document*)documentArchive;
-(void)saveCurrentVersion:(Version*)arg1 ;
-(unsigned long long)futureVersionCount;
-(unsigned long long)mergeWithVersionedDocument:(id)arg1 ;
-(unsigned)maxDocumentVersion;
-(void)setDocumentArchive:(Document*)arg1 ;
-(void)loadArchive:(const Document*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)dealloc;
-(id)initWithUnzippedData:(id)arg1 ;
-(BOOL)loadUnzippedData:(id)arg1 ;
@end


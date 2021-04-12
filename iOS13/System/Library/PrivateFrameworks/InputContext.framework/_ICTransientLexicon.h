/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/


#import <InputContext/InputContext-Structs.h>
@class NSString;

@interface _ICTransientLexicon : NSObject {

	LXLexiconRef _lexicon;
	int _count;
	unsigned char _typeFlags;
	NSString* _name;
	unsigned long long _entryCount;

}

@property (nonatomic,readonly) unsigned char typeFlags;                    //@synthesize typeFlags=_typeFlags - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long entryCount;              //@synthesize entryCount=_entryCount - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(BOOL)contains:(id)arg1 ;
-(id)getEntries;
-(void)removeAllEntries;
-(LXEntryRef)copyEntryForString:(id)arg1 ;
-(id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2 ;
-(BOOL)addEntry:(id)arg1 source:(unsigned char)arg2 type:(unsigned char)arg3 ;
-(void)removeEntry:(id)arg1 source:(unsigned char)arg2 ;
-(void)removeEntriesBySource:(unsigned char)arg1 ;
-(id)getSortKeyEquivalents:(id)arg1 ;
-(LXLexiconRef)getLexiconImplementation;
-(unsigned char)typeFlags;
-(unsigned long long)entryCount;
-(id)getEntryRefCount:(id)arg1 ;
-(id)getUsageCount:(id)arg1 ;
@end


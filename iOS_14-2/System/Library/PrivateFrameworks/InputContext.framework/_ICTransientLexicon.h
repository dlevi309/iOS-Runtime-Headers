/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeAllEntries;
-(BOOL)addEntry:(id)arg1 source:(unsigned char)arg2 type:(unsigned char)arg3 ;
-(unsigned char)typeFlags;
-(unsigned long long)entryCount;
-(id)getEntryRefCount:(id)arg1 ;
-(id)getSortKeyEquivalents:(id)arg1 ;
-(void)removeEntry:(id)arg1 source:(unsigned char)arg2 ;
-(NSString *)name;
-(id)getEntries;
-(LXEntryRef)copyEntryForString:(id)arg1 ;
-(void)removeEntriesBySource:(unsigned char)arg1 ;
-(BOOL)contains:(id)arg1 ;
-(id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2 ;
-(LXLexiconRef)getLexiconImplementation;
-(id)getUsageCount:(id)arg1 ;
-(void)dealloc;
@end


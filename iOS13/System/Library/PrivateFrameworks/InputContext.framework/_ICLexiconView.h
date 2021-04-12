/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/


#import <InputContext/InputContext-Structs.h>
@class NSString;

@interface _ICLexiconView : NSObject {

	LXLexiconRef _lexicon;
	unsigned char _typeFlags;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned char typeFlags;              //@synthesize typeFlags=_typeFlags - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(BOOL)contains:(id)arg1 ;
-(LXEntryRef)copyEntryForString:(id)arg1 ;
-(id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2 ;
-(id)getSortKeyEquivalents:(id)arg1 ;
-(const LXLexiconRef)getLexiconImplementation;
-(unsigned char)typeFlags;
@end


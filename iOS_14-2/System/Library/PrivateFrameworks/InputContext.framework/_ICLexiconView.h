/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned char)typeFlags;
-(id)getSortKeyEquivalents:(id)arg1 ;
-(NSString *)name;
-(LXEntryRef)copyEntryForString:(id)arg1 ;
-(BOOL)contains:(id)arg1 ;
-(id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2 ;
-(const LXLexiconRef)getLexiconImplementation;
-(void)dealloc;
@end


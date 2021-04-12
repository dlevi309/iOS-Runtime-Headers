/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


@class NSURL, NSData, NSDictionary;

@interface PRDictionary : NSObject {

	NSURL* _url;
	NSData* _data;
	NSDictionary* _offsetsDictionary;
	NSDictionary* _numEntriesDictionary;
	NSDictionary* _dictionariesDictionary;
	PRDictionary* _fallbackDictionary;

}
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 fallbackURL:(id)arg2 ;
-(BOOL)checkWordBuffer:(char*)arg1 length:(unsigned long long)arg2 encoding:(unsigned)arg3 index:(unsigned long long)arg4 caseInsensitive:(BOOL)arg5 ;
-(id)dictionaryAtIndex:(unsigned long long)arg1 ;
-(id)fallbackDictionary;
@end


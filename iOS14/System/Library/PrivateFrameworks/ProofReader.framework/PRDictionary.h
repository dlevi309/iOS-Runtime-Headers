/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)checkWordBuffer:(char*)arg1 length:(unsigned long long)arg2 encoding:(unsigned)arg3 index:(unsigned long long)arg4 caseInsensitive:(BOOL)arg5 ;
-(id)dictionaryAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithURL:(id)arg1 fallbackURL:(id)arg2 ;
-(id)fallbackDictionary;
-(void)dealloc;
@end


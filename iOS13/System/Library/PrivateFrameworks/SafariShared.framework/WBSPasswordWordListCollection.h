/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSMutableDictionary;

@interface WBSPasswordWordListCollection : NSObject {

	NSMutableDictionary* _wordListsByIdentifiers;

}
+(id)commonPasswordWordListCollection;
+(id)commonPasscodeWordListCollection;
-(id)init;
-(void)enumerateEntriesForString:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)entriesForString:(id)arg1 ;
-(void)addWordList:(id)arg1 ;
@end


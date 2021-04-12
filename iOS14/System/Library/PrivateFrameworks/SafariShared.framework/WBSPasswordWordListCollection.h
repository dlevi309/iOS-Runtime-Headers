/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSMutableDictionary;

@interface WBSPasswordWordListCollection : NSObject {

	NSMutableDictionary* _wordListsByIdentifiers;

}
+(id)commonPasswordWordListCollection;
+(id)commonPasscodeWordListCollection;
-(id)init;
-(void)addWordList:(id)arg1 ;
-(void)enumerateEntriesForString:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)entriesForString:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDDocument, NSMutableArray, NSMutableDictionary, WDList;

@interface WDListTable : NSObject {

	WDDocument* mDocument;
	NSMutableArray* mLists;
	NSMutableDictionary* mListMapById;
	WDList* mNullList;
	WDList* mDefaultList;

}
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(id)lists;
-(unsigned long long)listCount;
-(id)listWithListId:(int)arg1 ;
-(id)addListWithListId:(int)arg1 listDefinitionId:(int)arg2 ;
-(id)listAt:(unsigned long long)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)listCount;
-(id)lists;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(id)listAt:(unsigned long long)arg1 ;
-(id)listWithListId:(int)arg1 ;
-(id)addListWithListId:(int)arg1 listDefinitionId:(int)arg2 ;
@end


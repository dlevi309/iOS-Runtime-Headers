/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDDocument, NSMutableArray;

@interface WDList : NSObject {

	WDDocument* mDocument;
	int mListId;
	int mListDefinitionId;
	NSMutableArray* mLevelOverrides;

}

@property (nonatomic,readonly) int listId; 
@property (nonatomic,readonly) int listDefinitionId; 
-(id)description;
-(int)listId;
-(int)listDefinitionId;
-(id)levelOverrideForLevel:(unsigned char)arg1 ;
-(unsigned long long)levelOverrideCount;
-(id)levelOverrideAt:(unsigned long long)arg1 ;
-(void)removeLevelOverride:(id)arg1 ;
-(id)levelOverrides;
-(BOOL)isAnyListLevelOverridden;
-(id)initWithDocument:(id)arg1 listId:(int)arg2 listDefinitionId:(int)arg3 ;
-(id)addLevelOverrideWithLevel:(unsigned char)arg1 ;
@end


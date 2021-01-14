/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDDocument, NSMutableArray, NSMutableDictionary, WDListDefinition;

@interface WDListDefinitionTable : NSObject {

	WDDocument* mDocument;
	NSMutableArray* mListDefinitions;
	NSMutableDictionary* mListDefinitionMapById;
	NSMutableDictionary* mListDefinitionMapByStyleId;
	WDListDefinition* mNullListDefinition;
	WDListDefinition* mDefaultListDefinition;

}
-(id)definitions;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(id)addDefinitionWithDefinitionId:(int)arg1 styleId:(id)arg2 ;
-(id)resolvedDefinitionWithDefinitionId:(int)arg1 ;
-(id)definitionWithDefinitionId:(int)arg1 ;
-(id)definitionWithStyleId:(id)arg1 ;
@end


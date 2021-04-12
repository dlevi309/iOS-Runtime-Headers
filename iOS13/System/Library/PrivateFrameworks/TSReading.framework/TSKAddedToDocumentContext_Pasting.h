/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKAddedToDocumentContext.h>

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {

	CFDictionaryRef mTableIDMap;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)autoUpdateSmartFields;
-(CFDictionaryRef)tableIDMap;
-(void)setTableIDMap:(CFDictionaryRef)arg1 ;
-(BOOL)wasPasted;
-(BOOL)uniqueBookmarks;
-(BOOL)syncChanges;
@end


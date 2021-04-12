/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSMutableDictionary;

@interface AXMLexiconManager : NSObject {

	NSMutableDictionary* _cachedLexicons;

}
-(id)init;
-(LXLexiconRef)_lexiconForLocale:(id)arg1 diagnostics:(id)arg2 ;
-(BOOL)lexiconExistsForLocale:(id)arg1 diagnostics:(id)arg2 ;
-(BOOL)textExistsInLexicon:(id)arg1 withLocale:(id)arg2 diagnostics:(id)arg3 ;
-(void*)_opaqueLexiconForLocale:(id)arg1 diagnostics:(id)arg2 ;
@end


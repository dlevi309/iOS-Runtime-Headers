/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKTextInputDebugLogEntry.h>

@class NSDictionary;

@interface PKTextInputDebugArchivedLogEntry : PKTextInputDebugLogEntry {

	NSDictionary* _logDictionary;

}
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithRecordingLogEntry:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentationWithDetailLevel:(long long)arg1 targetContentLevel:(long long)arg2 ;
-(BOOL)_loadInputDrawingFromDictionary:(id)arg1 errorMessage:(id*)arg2 ;
-(BOOL)_loadTextInputTargetsFromDictionaries:(id)arg1 ;
-(BOOL)_loadTargetContentInfoFromDictionary:(id)arg1 targets:(id)arg2 ;
-(BOOL)_loadRecognitionResultFromDictionary:(id)arg1 ;
@end


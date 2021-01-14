/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSMutableDictionary, NSDateFormatter;

@interface SGReverseTemplatesJSDataDetectors : NSObject {

	NSMutableDictionary* _scanners;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _naiveDateFormatter;
	NSDateFormatter* _noTimeFormatter;

}
-(id)init;
-(void)dealloc;
-(id)runDataDetectors:(id)arg1 locale:(id)arg2 epoch:(double)arg3 metadataForTypes:(id)arg4 ;
-(id)_result:(DDResultRef)arg1 containsTypes:(id)arg2 ;
-(void)_result:(DDResultRef)arg1 containsTypes:(id)arg2 foundTypes:(id)arg3 ;
@end


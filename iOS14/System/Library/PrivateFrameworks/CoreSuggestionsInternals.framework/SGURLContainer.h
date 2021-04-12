/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGExternalEnrichment.h>

@class NSMutableArray;

@interface SGURLContainer : NSObject <SGExternalEnrichment> {

	NSMutableArray* _urls;

}
+(BOOL)deleteAllURLsWithBundleIdentifier:(id)arg1 entityStore:(id)arg2 ;
-(id)init;
-(void)writeWithEntityStore:(id)arg1 ;
-(void)flushWrites;
@end


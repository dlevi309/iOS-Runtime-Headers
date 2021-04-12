/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMTag.h>

@class NSString;

@interface AXMReplacementTag : AXMTag {

	NSString* _overrideSpeakableText;
	NSRange _overrideRange;

}
+(id)replacementTagWithSpeakableText:(id)arg1 range:(NSRange)arg2 ;
-(NSRange)range;
-(id)originalText;
-(id)speakableText;
@end


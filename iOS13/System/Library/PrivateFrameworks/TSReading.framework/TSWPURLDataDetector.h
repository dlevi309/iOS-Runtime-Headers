/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPDataDetectorProtocol.h>

@class NSString;

@interface TSWPURLDataDetector : NSObject <TSWPDataDetectorProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initURLCharacterSets;
+(NSRange)expandValidRange:(NSRange)arg1 inString:(id)arg2 ;
+(id)newArrayByScanningString:(id)arg1 scanRange:(NSRange)arg2 ;
+(id)newURLFromString:(id)arg1 ;
+(id)detectorIdentifier;
+(void)setInvalidURLSchemes:(id)arg1 ;
+(NSRange)calculateScanRangeForString:(id)arg1 changedRange:(NSRange)arg2 ;
+(id)scanString:(id)arg1 scanRange:(NSRange)arg2 ;
@end


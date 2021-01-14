/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


@class NSMutableDictionary, NSString;

@interface SABinaryLocator : NSObject {

	NSMutableDictionary* _mappings;
	NSString* _buildNumber;
	BOOL _dirty;
	BOOL _enabled;

}
+(id)sharedBinaryLocator;
-(id)init;
-(oneway void)done;
@end


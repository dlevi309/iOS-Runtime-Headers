/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@class AXHATimeStamp, NSString;

@interface AXHADetectionResult : NSObject {

	AXHATimeStamp* _timestamp;
	NSString* _identifier;
	double _confidence;

}

@property (readonly) AXHATimeStamp * timestamp; 
@property (readonly) NSString * identifier; 
@property (readonly) double confidence; 
@property (readonly) NSString * debug; 
-(double)confidence;
-(id)initWithResult:(id)arg1 ;
-(AXHATimeStamp *)timestamp;
-(NSString *)debug;
-(NSString *)identifier;
-(id)initWithTimeStamp:(id)arg1 identifier:(id)arg2 confidence:(double)arg3 ;
@end


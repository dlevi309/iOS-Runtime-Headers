/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString, NSDictionary;

@interface BWTOFAssistedAutoFocusEstimatorAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	NSString* _portType;
	NSDictionary* _estimatorResults;

}

@property (nonatomic,retain) NSString * portType;                          //@synthesize portType=_portType - In the implementation block
@property (nonatomic,retain) NSDictionary * estimatorResults;              //@synthesize estimatorResults=_estimatorResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPortType:(NSString *)arg1 ;
-(id)init;
-(NSString *)portType;
-(id)eventName;
-(id)eventDictionary;
-(NSDictionary *)estimatorResults;
-(void)reset;
-(void)setEstimatorResults:(NSDictionary *)arg1 ;
-(void)dealloc;
@end


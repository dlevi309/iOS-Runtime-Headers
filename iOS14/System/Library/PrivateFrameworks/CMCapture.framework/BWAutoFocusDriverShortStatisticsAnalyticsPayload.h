/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString, NSDictionary;

@interface BWAutoFocusDriverShortStatisticsAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	NSString* _portType;
	NSDictionary* _afDriverShortStatistics;

}

@property (nonatomic,retain) NSString * portType;                                 //@synthesize portType=_portType - In the implementation block
@property (nonatomic,retain) NSDictionary * afDriverShortStatistics;              //@synthesize afDriverShortStatistics=_afDriverShortStatistics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPortType:(NSString *)arg1 ;
-(id)init;
-(NSString *)portType;
-(id)eventName;
-(id)eventDictionary;
-(NSDictionary *)afDriverShortStatistics;
-(void)reset;
-(void)setAfDriverShortStatistics:(NSDictionary *)arg1 ;
-(void)dealloc;
@end


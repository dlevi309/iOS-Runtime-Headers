/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <libobjc.A.dylib/CoreAnalyticsEventProtocol.h>

@class NSString;

@interface PMCoreAnalyticsEvent : NSObject <CoreAnalyticsEventProtocol> {

	BOOL _appendBundleName;

}

@property (assign,nonatomic) BOOL appendBundleName;                 //@synthesize appendBundleName=_appendBundleName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleForAnalytics;
-(id)eventName;
-(id)eventPayload;
-(void)sendToCoreAnalytics;
-(BOOL)appendBundleName;
-(void)setAppendBundleName:(BOOL)arg1 ;
@end


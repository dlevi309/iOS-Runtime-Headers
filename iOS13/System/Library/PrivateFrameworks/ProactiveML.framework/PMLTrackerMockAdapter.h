/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLTrackerAdapterProtocol.h>

@class NSMutableArray, NSString;

@interface PMLTrackerMockAdapter : NSObject <PMLTrackerAdapterProtocol> {

	NSMutableArray* _trackedMessages;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)postMetricId:(unsigned)arg1 message:(id)arg2 ;
-(void)clearAllTrackedMessages;
-(id)trackedMessagesByClass:(Class)arg1 ;
@end


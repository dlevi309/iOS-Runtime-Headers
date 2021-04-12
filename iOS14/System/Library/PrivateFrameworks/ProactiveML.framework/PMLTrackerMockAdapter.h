/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphDataModelEnrichmentProcessor.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface PGGraphUserBehaviorEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {

	NSObject*<OS_os_log> _loggingConnection;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundJobName;
+(double)backgroundJobTimeout;
+(BOOL)supportsBackgroundJob;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)backgroundJobTimeout;
+(BOOL)supportsBackgroundJob;
+(id)backgroundJobName;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTEventDataProvider.h>

@interface MTEventHandler : MTEventDataProvider

@property (assign,nonatomic,__weak) id<MTEventHandlerDelegate> delegate; 
+(void)createEventContextCache;
+(void)clearEventContextCache;
+(id)currentEventContextCache;
+(id)cachableWithKey:(id)arg1 onBackgroundThread:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(id)eventType;
-(id)knownFields;
-(id)eventVersion:(id)arg1 ;
-(id)metricsDataWithCallerSuppliedFields:(id)arg1 ;
-(BOOL)mtIncludeBaseFields;
@end


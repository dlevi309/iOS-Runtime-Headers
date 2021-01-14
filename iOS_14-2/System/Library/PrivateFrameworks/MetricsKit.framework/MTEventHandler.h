/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTEventDataProvider.h>

@class NSString, NSArray;

@interface MTEventHandler : MTEventDataProvider {

	NSString* _registeredName;
	NSArray* _registeredEventData;
	NSArray* _postProcessingBlocks;

}

@property (nonatomic,retain) NSString * registeredName;                               //@synthesize registeredName=_registeredName - In the implementation block
@property (nonatomic,retain) NSArray * registeredEventData;                           //@synthesize registeredEventData=_registeredEventData - In the implementation block
@property (retain) NSArray * postProcessingBlocks;                                    //@synthesize postProcessingBlocks=_postProcessingBlocks - In the implementation block
@property (assign,nonatomic,__weak) id<MTEventHandlerDelegate> delegate; 
+(void)createEventContextCache;
+(void)clearEventContextCache;
+(id)currentEventContextCache;
+(id)cachableWithKey:(id)arg1 onBackgroundThread:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(id)eventType;
-(id)knownFields;
-(void)setRegisteredName:(NSString *)arg1 ;
-(NSString *)registeredName;
-(void)setRegisteredEventData:(NSArray *)arg1 ;
-(id)eventVersion:(id)arg1 ;
-(void)addPostProcessingBlock:(/*^block*/id)arg1 ;
-(void)didCreateMetricsData:(id)arg1 ;
-(id)metricsDataWithCallerSuppliedFields:(id)arg1 ;
-(id)metricsDataWithEventData:(id)arg1 ;
-(NSArray *)registeredEventData;
-(BOOL)mtIncludeBaseFields;
-(NSArray *)postProcessingBlocks;
-(void)setPostProcessingBlocks:(NSArray *)arg1 ;
-(id)metricsDataWithFields:(id)arg1 ;
@end


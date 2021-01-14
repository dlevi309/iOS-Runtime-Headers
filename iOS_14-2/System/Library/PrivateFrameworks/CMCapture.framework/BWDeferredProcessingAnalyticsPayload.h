/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString;

@interface BWDeferredProcessingAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	int _error;
	int _processingType;
	BOOL _fileBacked;
	unsigned _containerAgeInSeconds;
	unsigned long long _containerSizeInBytes;
	BOOL _interactiveQoS;
	unsigned _graphPrepareDurationInMilliseconds;
	unsigned _jobDurationInMilliseconds;

}

@property (assign,nonatomic) int error;                                                //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int processingType;                                       //@synthesize processingType=_processingType - In the implementation block
@property (assign,nonatomic) BOOL fileBacked;                                          //@synthesize fileBacked=_fileBacked - In the implementation block
@property (assign,nonatomic) unsigned containerAgeInSeconds;                           //@synthesize containerAgeInSeconds=_containerAgeInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long containerSizeInBytes;                  //@synthesize containerSizeInBytes=_containerSizeInBytes - In the implementation block
@property (assign,nonatomic) BOOL interactiveQoS;                                      //@synthesize interactiveQoS=_interactiveQoS - In the implementation block
@property (assign,nonatomic) unsigned graphPrepareDurationInMilliseconds;              //@synthesize graphPrepareDurationInMilliseconds=_graphPrepareDurationInMilliseconds - In the implementation block
@property (assign,nonatomic) unsigned jobDurationInMilliseconds;                       //@synthesize jobDurationInMilliseconds=_jobDurationInMilliseconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)eventName;
-(void)setError:(int)arg1 ;
-(int)error;
-(id)eventDictionary;
-(BOOL)fileBacked;
-(unsigned)containerAgeInSeconds;
-(unsigned long long)containerSizeInBytes;
-(BOOL)interactiveQoS;
-(unsigned)jobDurationInMilliseconds;
-(unsigned)graphPrepareDurationInMilliseconds;
-(void)reset;
-(void)setContainerAgeInSeconds:(unsigned)arg1 ;
-(void)setContainerSizeInBytes:(unsigned long long)arg1 ;
-(int)processingType;
-(void)setProcessingType:(int)arg1 ;
-(void)setFileBacked:(BOOL)arg1 ;
-(void)setInteractiveQoS:(BOOL)arg1 ;
-(void)setGraphPrepareDurationInMilliseconds:(unsigned)arg1 ;
-(void)setJobDurationInMilliseconds:(unsigned)arg1 ;
-(void)dealloc;
@end


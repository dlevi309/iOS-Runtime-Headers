/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(void)dealloc;
-(int)error;
-(void)setError:(int)arg1 ;
-(void)reset;
-(id)eventName;
-(int)processingType;
-(id)eventDictionary;
-(void)setProcessingType:(int)arg1 ;
-(BOOL)fileBacked;
-(void)setFileBacked:(BOOL)arg1 ;
-(unsigned)containerAgeInSeconds;
-(void)setContainerAgeInSeconds:(unsigned)arg1 ;
-(unsigned long long)containerSizeInBytes;
-(void)setContainerSizeInBytes:(unsigned long long)arg1 ;
-(BOOL)interactiveQoS;
-(void)setInteractiveQoS:(BOOL)arg1 ;
-(unsigned)graphPrepareDurationInMilliseconds;
-(void)setGraphPrepareDurationInMilliseconds:(unsigned)arg1 ;
-(unsigned)jobDurationInMilliseconds;
-(void)setJobDurationInMilliseconds:(unsigned)arg1 ;
@end


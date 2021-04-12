/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSArray;

@interface HDDocumentQueryServer : HDQueryServer {

	BOOL _suspended;
	NSArray* _authorizedSamples;
	unsigned long long _clientSampleIndex;
	BOOL _includeDocumentData;
	unsigned long long _maxResults;
	NSArray* _sortDescriptors;

}

@property (nonatomic,readonly) unsigned long long maxResults;              //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) NSArray * sortDescriptors;                  //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,readonly) BOOL includeDocumentData;                   //@synthesize includeDocumentData=_includeDocumentData - In the implementation block
+(id)requiredEntitlements;
+(Class)queryClass;
-(NSArray *)sortDescriptors;
-(unsigned long long)maxResults;
-(BOOL)includeDocumentData;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(BOOL)_deliverOneSample:(id)arg1 client:(id)arg2 errorOut:(id*)arg3 ;
-(id)samplesBeforeAuthorizationWithSortDescriptors:(id)arg1 errorOut:(id*)arg2 ;
-(BOOL)_deliverAuthorizedSamplesToClient:(id)arg1 errorOut:(id*)arg2 ;
-(void)authorizeSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


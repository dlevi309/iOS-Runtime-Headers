/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REPredictorObserver.h>
#import <libobjc.A.dylib/REBluetoothDeviceRelevanceProviderManagerProperties.h>

@class NSString;

@interface REBluetoothDeviceRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REBluetoothDeviceRelevanceProviderManagerProperties> {

	BOOL _connectedToCar;
	BOOL _connectedToSpeaker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL connectedToCar; 
@property (nonatomic,readonly) BOOL connectedToSpeaker; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
-(void)pause;
-(void)resume;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)connectedToCar;
-(void)_prepareForUpdate;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)predictorDidUpdate:(id)arg1 ;
-(BOOL)connectedToSpeaker;
@end


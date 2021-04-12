/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>

@class MPCAssistantMutableRemoteControlDestination, NSArray, NSString;

@interface HMDMPCResolveDestinationOperation : HMFOperation <HMFObject> {

	MPCAssistantMutableRemoteControlDestination* _resolvedDestination;
	NSArray* _hashedRouteIDs;
	/*^block*/id _resolveDestinationCompletionBlock;
	long long _mediaApplicationDestination;

}

@property (copy) id resolveDestinationCompletionBlock;                                                       //@synthesize resolveDestinationCompletionBlock=_resolveDestinationCompletionBlock - In the implementation block
@property (nonatomic,retain) MPCAssistantMutableRemoteControlDestination * resolvedDestination;              //@synthesize resolvedDestination=_resolvedDestination - In the implementation block
@property (nonatomic,readonly) long long mediaApplicationDestination;                                        //@synthesize mediaApplicationDestination=_mediaApplicationDestination - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hashedRouteIDs;                                                //@synthesize hashedRouteIDs=_hashedRouteIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)shortDescription;
-(NSString *)description;
-(void)main;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(NSString *)shortDescription;
-(NSString *)privateDescription;
-(NSArray *)attributeDescriptions;
-(long long)mediaApplicationDestination;
-(NSArray *)hashedRouteIDs;
-(id)resolveDestinationCompletionBlock;
-(MPCAssistantMutableRemoteControlDestination *)resolvedDestination;
-(id)initWithHashedRouteIDs:(id)arg1 mediaApplicationDestination:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setResolvedDestination:(MPCAssistantMutableRemoteControlDestination *)arg1 ;
-(void)setResolveDestinationCompletionBlock:(id)arg1 ;
@end


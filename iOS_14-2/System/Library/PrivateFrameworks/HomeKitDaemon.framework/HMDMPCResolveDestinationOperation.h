/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>

@class MPCAssistantMutableRemoteControlDestination, NSArray, NSString;

@interface HMDMPCResolveDestinationOperation : HMFOperation <HMFObject> {

	BOOL _forceSingleGroup;
	MPCAssistantMutableRemoteControlDestination* _resolvedDestination;
	NSArray* _hashedRouteIDs;
	/*^block*/id _resolveDestinationCompletionBlock;
	long long _mediaApplicationDestination;

}

@property (copy) id resolveDestinationCompletionBlock;                                                       //@synthesize resolveDestinationCompletionBlock=_resolveDestinationCompletionBlock - In the implementation block
@property (nonatomic,retain) MPCAssistantMutableRemoteControlDestination * resolvedDestination;              //@synthesize resolvedDestination=_resolvedDestination - In the implementation block
@property (nonatomic,readonly) long long mediaApplicationDestination;                                        //@synthesize mediaApplicationDestination=_mediaApplicationDestination - In the implementation block
@property (nonatomic,readonly) BOOL forceSingleGroup;                                                        //@synthesize forceSingleGroup=_forceSingleGroup - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hashedRouteIDs;                                                //@synthesize hashedRouteIDs=_hashedRouteIDs - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(NSString *)privateDescription;
-(NSString *)shortDescription;
-(NSString *)description;
-(void)main;
-(NSArray *)attributeDescriptions;
-(long long)mediaApplicationDestination;
-(NSArray *)hashedRouteIDs;
-(id)resolveDestinationCompletionBlock;
-(MPCAssistantMutableRemoteControlDestination *)resolvedDestination;
-(id)initWithHashedRouteIDs:(id)arg1 mediaApplicationDestination:(long long)arg2 forceSingleGroup:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setResolvedDestination:(MPCAssistantMutableRemoteControlDestination *)arg1 ;
-(void)setResolveDestinationCompletionBlock:(id)arg1 ;
-(BOOL)forceSingleGroup;
@end


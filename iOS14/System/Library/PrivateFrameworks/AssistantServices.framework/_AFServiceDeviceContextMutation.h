/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFServiceDeviceContextMutating.h>

@class AFServiceDeviceContext, NSUUID, NSString, NSArray, NSDictionary;

@interface _AFServiceDeviceContextMutation : NSObject <AFServiceDeviceContextMutating> {

	AFServiceDeviceContext* _baseModel;
	NSUUID* _identifier;
	NSString* _mediaSystemIdentifier;
	NSString* _mediaRouteIdentifier;
	NSString* _roomName;
	long long _proximity;
	NSArray* _contextSnapshots;
	NSDictionary* _serializedContextByKey;
	NSDictionary* _metricsContext;
	struct {
		unsigned isDirty : 1;
		unsigned hasIdentifier : 1;
		unsigned hasMediaSystemIdentifier : 1;
		unsigned hasMediaRouteIdentifier : 1;
		unsigned hasRoomName : 1;
		unsigned hasProximity : 1;
		unsigned hasContextSnapshots : 1;
		unsigned hasSerializedContextByKey : 1;
		unsigned hasMetricsContext : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setRoomName:(id)arg1 ;
-(void)setMediaRouteIdentifier:(id)arg1 ;
-(void)setContextSnapshots:(id)arg1 ;
-(void)setSerializedContextByKey:(id)arg1 ;
-(void)setMetricsContext:(id)arg1 ;
-(id)generate;
-(void)setProximity:(long long)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(void)setMediaSystemIdentifier:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFSiriActivationContextMutating.h>

@class AFSiriActivationContext, NSString, NSDictionary;

@interface _AFSiriActivationContextMutation : NSObject <AFSiriActivationContextMutating> {

	AFSiriActivationContext* _baseModel;
	unsigned long long _timestamp;
	long long _source;
	long long _event;
	unsigned long long _options;
	NSString* _deviceID;
	NSDictionary* _userInfo;
	struct {
		unsigned isDirty : 1;
		unsigned hasTimestamp : 1;
		unsigned hasSource : 1;
		unsigned hasEvent : 1;
		unsigned hasOptions : 1;
		unsigned hasDeviceID : 1;
		unsigned hasUserInfo : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDeviceID:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)init;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setSource:(long long)arg1 ;
-(void)setEvent:(long long)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
@end


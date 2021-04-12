/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/AppServerSupport
*/


@protocol OS_xpc_object;
@class NSString, NSUUID, NSObject;

@interface LASSProperties4RB : NSObject {

	int _requestedJetsamPriority;
	NSString* _label;
	NSUUID* _instance;
	NSObject*<OS_xpc_object> _additionalProperties;

}

@property (nonatomic,readonly) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSUUID * instance;                                          //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) int requestedJetsamPriority;                                //@synthesize requestedJetsamPriority=_requestedJetsamPriority - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> additionalProperties;              //@synthesize additionalProperties=_additionalProperties - In the implementation block
+(id)propertiesForPid:(int)arg1 error:(id*)arg2 ;
-(NSObject*<OS_xpc_object>)additionalProperties;
-(NSString *)label;
-(NSUUID *)instance;
-(int)requestedJetsamPriority;
-(id)initWithLabel:(id)arg1 instance:(id)arg2 requestedJetsamPriority:(int)arg3 additionalProperties:(id)arg4 ;
@end


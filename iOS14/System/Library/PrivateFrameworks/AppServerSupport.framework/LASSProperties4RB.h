/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/AppServerSupport
*/


@protocol OS_xpc_object;
@class NSString, NSUUID, NSObject;

@interface LASSProperties4RB : NSObject {

	int _requestedJetsamPriority;
	NSString* _label;
	NSUUID* _instance;
	NSObject*<OS_xpc_object> _additionalProperties;
	NSString* _program;

}

@property (nonatomic,readonly) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSUUID * instance;                                          //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) int requestedJetsamPriority;                                //@synthesize requestedJetsamPriority=_requestedJetsamPriority - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> additionalProperties;              //@synthesize additionalProperties=_additionalProperties - In the implementation block
@property (nonatomic,readonly) NSString * program;                                         //@synthesize program=_program - In the implementation block
+(id)propertiesForPid:(int)arg1 error:(id*)arg2 ;
+(id)_propertiesFromAttrs:(id)arg1 ;
+(id)propertiesForJob:(id)arg1 error:(id*)arg2 ;
-(int)requestedJetsamPriority;
-(NSUUID *)instance;
-(id)initWithLabel:(id)arg1 instance:(id)arg2 requestedJetsamPriority:(int)arg3 additionalProperties:(id)arg4 program:(id)arg5 ;
-(NSObject*<OS_xpc_object>)additionalProperties;
-(NSString *)program;
-(NSString *)label;
@end


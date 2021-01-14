/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/


@class NSString, NSDictionary;

@interface TRDeviceSetupAction : NSObject {

	NSString* _actionType;
	NSDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NSString * actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameters;                  //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) unsigned long long protocolVersion; 
+(id)actionWithData:(id)arg1 error:(id*)arg2 supportsLegacy:(BOOL)arg3 ;
+(id)actionWithActionType:(id)arg1 parameters:(id)arg2 ;
-(NSDictionary *)parameters;
-(NSString *)actionType;
-(id)propertyListRepresentation;
-(id)init;
-(unsigned long long)protocolVersion;
-(id)description;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)_initWithActionType:(id)arg1 parameters:(id)arg2 ;
@end


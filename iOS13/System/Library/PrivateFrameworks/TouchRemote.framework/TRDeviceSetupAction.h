/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSDictionary *)parameters;
-(unsigned long long)protocolVersion;
-(NSString *)actionType;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)propertyListRepresentation;
-(id)_initWithActionType:(id)arg1 parameters:(id)arg2 ;
@end


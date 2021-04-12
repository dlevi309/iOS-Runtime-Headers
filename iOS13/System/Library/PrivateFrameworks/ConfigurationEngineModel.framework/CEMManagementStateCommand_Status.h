/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMManagementStateCommand_Status : CEMPayloadBase {

	NSArray* _statusCommands;
	NSArray* _statusDeclarations;

}

@property (nonatomic,copy) NSArray * statusCommands;                  //@synthesize statusCommands=_statusCommands - In the implementation block
@property (nonatomic,copy) NSArray * statusDeclarations;              //@synthesize statusDeclarations=_statusDeclarations - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithCommands:(id)arg1 withDeclarations:(id)arg2 ;
+(id)buildRequiredOnlyWithCommands:(id)arg1 withDeclarations:(id)arg2 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusCommands:(NSArray *)arg1 ;
-(void)setStatusDeclarations:(NSArray *)arg1 ;
-(NSArray *)statusCommands;
-(NSArray *)statusDeclarations;
@end


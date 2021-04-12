/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMApplicationListActiveNSExtensionsCommand_Status : CEMPayloadBase {

	NSArray* _statusExtensions;

}

@property (nonatomic,copy) NSArray * statusExtensions;              //@synthesize statusExtensions=_statusExtensions - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithExtensions:(id)arg1 ;
+(id)buildRequiredOnlyWithExtensions:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusExtensions:(NSArray *)arg1 ;
-(NSArray *)statusExtensions;
@end


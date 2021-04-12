/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMApplicationListInstalledApplicationsCommand_Status : CEMPayloadBase {

	NSArray* _statusInstalledApplicationList;

}

@property (nonatomic,copy) NSArray * statusInstalledApplicationList;              //@synthesize statusInstalledApplicationList=_statusInstalledApplicationList - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithInstalledApplicationList:(id)arg1 ;
+(id)buildRequiredOnlyWithInstalledApplicationList:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusInstalledApplicationList:(NSArray *)arg1 ;
-(NSArray *)statusInstalledApplicationList;
@end


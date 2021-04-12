/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class RMModelAnyPayload, NSArray;

@interface RMProtocolStatusReport : RMModelPayloadBase {

	RMModelAnyPayload* _reportStatusItems;
	NSArray* _reportErrors;

}

@property (nonatomic,copy) RMModelAnyPayload * reportStatusItems;              //@synthesize reportStatusItems=_reportStatusItems - In the implementation block
@property (nonatomic,copy) NSArray * reportErrors;                             //@synthesize reportErrors=_reportErrors - In the implementation block
+(id)requestWithStatusItems:(id)arg1 errors:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setReportStatusItems:(RMModelAnyPayload *)arg1 ;
-(void)setReportErrors:(NSArray *)arg1 ;
-(RMModelAnyPayload *)reportStatusItems;
-(NSArray *)reportErrors;
@end


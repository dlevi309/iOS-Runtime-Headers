/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, NSArray;

@interface RMProtocolStatusReport_Errors : RMModelPayloadBase {

	NSString* _reportStatusItem;
	NSArray* _reportReasons;

}

@property (nonatomic,copy) NSString * reportStatusItem;              //@synthesize reportStatusItem=_reportStatusItem - In the implementation block
@property (nonatomic,copy) NSArray * reportReasons;                  //@synthesize reportReasons=_reportReasons - In the implementation block
+(id)allowedReportKeys;
+(id)buildWithStatusItem:(id)arg1 reasons:(id)arg2 ;
+(id)buildRequiredOnlyWithStatusItem:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setReportStatusItem:(NSString *)arg1 ;
-(void)setReportReasons:(NSArray *)arg1 ;
-(NSString *)reportStatusItem;
-(NSArray *)reportReasons;
@end


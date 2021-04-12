/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDCPSOperation.h>

@class NSArray, NSError, NSString;

@interface HDCPSUpdateGatewaysOperation : HDCPSOperation {

	NSArray* _gateways;
	NSError* _error;
	NSString* _batchID;
	NSArray* _externalIDs;

}

@property (nonatomic,copy,readonly) NSString * batchID;                 //@synthesize batchID=_batchID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * externalIDs;              //@synthesize externalIDs=_externalIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * gateways;                 //@synthesize gateways=_gateways - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
-(id)debugDescription;
-(NSError *)error;
-(void)main;
-(NSArray *)gateways;
-(NSString *)batchID;
-(id)initWithManager:(id)arg1 profile:(id)arg2 batchID:(id)arg3 externalIDs:(id)arg4 ;
-(id)initWithManager:(id)arg1 profile:(id)arg2 ;
-(void)_failWithError:(id)arg1 step:(id)arg2 ;
-(NSArray *)externalIDs;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

@class NSString, REMObjectID;


@protocol REMDAAccountProviding <NSObject>
@property (nonatomic,readonly) NSString * accountID; 
@property (nonatomic,readonly) REMObjectID * rem_accountObjectID; 
@property (nonatomic,readonly) NSString * accountDescription; 
@required
-(NSString *)accountDescription;
-(NSString *)accountID;
-(id)loggingDescription;
-(REMObjectID *)rem_accountObjectID;

@end


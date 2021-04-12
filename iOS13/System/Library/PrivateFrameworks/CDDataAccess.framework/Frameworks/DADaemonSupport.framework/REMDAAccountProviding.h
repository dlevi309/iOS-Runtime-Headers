/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


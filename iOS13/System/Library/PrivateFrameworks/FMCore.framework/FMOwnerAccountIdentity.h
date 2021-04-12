/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/

@class NSString;


@protocol FMOwnerAccountIdentity
@property (nonatomic,copy,readonly) NSString * personId; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@required
-(NSString *)personId;
-(NSString *)username;
-(NSString *)firstName;
-(NSString *)lastName;

@end


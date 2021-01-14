/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/

@class NSString;


@protocol FMOwnerAccountIdentity
@property (nonatomic,copy,readonly) NSString * personId; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@required
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)username;
-(NSString *)personId;

@end


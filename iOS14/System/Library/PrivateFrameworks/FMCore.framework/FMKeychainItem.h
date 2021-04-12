/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/

@class NSString, NSDate, NSData;


@protocol FMKeychainItem <NSObject>
@property (nonatomic,readonly) NSString * password; 
@property (nonatomic,readonly) NSDate * lastModifyDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSData * rawData; 
@required
-(NSData *)rawData;
-(NSString *)password;
-(NSDate *)creationDate;
-(NSDate *)lastModifyDate;

@end


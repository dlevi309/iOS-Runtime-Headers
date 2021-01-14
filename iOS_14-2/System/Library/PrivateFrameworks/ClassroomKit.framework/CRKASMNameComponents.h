/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSString;


@protocol CRKASMNameComponents <NSObject>
@property (nonatomic,copy,readonly) NSString * givenName; 
@property (nonatomic,copy,readonly) NSString * phoneticGivenName; 
@property (nonatomic,copy,readonly) NSString * familyName; 
@property (nonatomic,copy,readonly) NSString * phoneticFamilyName; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * phoneticFullName; 
@property (nonatomic,copy,readonly) NSString * monogram; 
@required
-(NSString *)familyName;
-(NSString *)fullName;
-(NSString *)phoneticFullName;
-(NSString *)givenName;
-(NSString *)phoneticFamilyName;
-(NSString *)phoneticGivenName;
-(NSString *)monogram;

@end


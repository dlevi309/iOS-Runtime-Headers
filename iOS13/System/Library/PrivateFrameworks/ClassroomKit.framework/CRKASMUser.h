/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSString;


@protocol CRKASMUser
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSObject*<CRKASMNameComponents> nameComponents; 
@property (nonatomic,readonly) NSObject*<CRKASMOrganization> organization; 
@required
-(NSString *)identifier;
-(NSObject*<CRKASMOrganization>)organization;
-(NSObject*<CRKASMNameComponents>)nameComponents;

@end


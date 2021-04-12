/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

@class NSString, NSPersonNameComponents;


@protocol CLSContactsSearchable
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSPersonNameComponents * nameComponents; 
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,readonly) NSString * groupIdentifier; 
@optional
-(NSString *)groupIdentifier;
-(NSString *)emailAddress;
-(NSPersonNameComponents *)nameComponents;

@required
-(NSString *)displayName;

@end


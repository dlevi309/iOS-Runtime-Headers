/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


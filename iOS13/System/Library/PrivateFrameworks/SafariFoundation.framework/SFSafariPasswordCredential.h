/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/

@class NSString, NSDate;


@protocol SFSafariPasswordCredential <NSCopying,NSObject,NSSecureCoding>
@property (nonatomic,copy,readonly) NSString * user; 
@property (nonatomic,copy,readonly) NSString * site; 
@property (nonatomic,copy,readonly) NSString * password; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
@required
-(NSString *)user;
-(NSString *)password;
-(NSDate *)creationDate;
-(BOOL)isExternal;
-(NSString *)site;

@end


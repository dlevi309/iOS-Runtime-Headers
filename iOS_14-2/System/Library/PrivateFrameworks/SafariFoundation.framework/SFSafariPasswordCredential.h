/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)site;
-(NSString *)password;
-(NSDate *)creationDate;
-(NSString *)user;
-(BOOL)isExternal;

@end


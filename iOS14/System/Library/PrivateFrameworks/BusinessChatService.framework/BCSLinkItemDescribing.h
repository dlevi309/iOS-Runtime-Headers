/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

@class NSURL, NSString, NSDictionary, NSNumber;


@protocol BCSLinkItemDescribing <NSObject>
@property (nonatomic,retain,readonly) NSURL * linkURL; 
@property (nonatomic,copy,readonly) NSString * fullHash; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,retain,readonly) NSString * heroImageURLString; 
@property (nonatomic,retain,readonly) NSString * iconImageURLString; 
@property (nonatomic,retain,readonly) NSURL * redirectURL; 
@property (nonatomic,readonly) long long action; 
@property (nonatomic,readonly) BOOL isPoweredBy; 
@property (nonatomic,retain,readonly) NSDictionary * mapIconStyleAttributes; 
@property (nonatomic,retain,readonly) NSNumber * mapItemMUID; 
@required
-(NSURL *)linkURL;
-(long long)action;
-(NSString *)bundleID;
-(NSURL *)redirectURL;
-(BOOL)isPoweredBy;
-(NSString *)fullHash;
-(NSDictionary *)mapIconStyleAttributes;
-(NSNumber *)mapItemMUID;
-(NSString *)heroImageURLString;
-(NSString *)iconImageURLString;

@end


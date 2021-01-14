/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

@class NSString, NSSet;


@protocol WiFiCandidateNetwork <NSObject,TBScorable>
@property (nonatomic,copy) NSString * SSID; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (nonatomic,copy,readonly) NSString * password; 
@property (nonatomic,readonly) long long source; 
@property (nonatomic,readonly) NSSet * attributes; 
@property (assign,nonatomic) BOOL matched; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long venueGroup; 
@property (nonatomic,readonly) unsigned venueType; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@optional
-(NSString *)uniqueIdentifier;

@required
-(NSString *)SSID;
-(void)setSSID:(id)arg1;
-(unsigned long long)venueGroup;
-(NSString *)password;
-(NSSet *)attributes;
-(unsigned long long)type;
-(unsigned)venueType;
-(BOOL)matched;
-(NSSet *)accessPoints;
-(long long)source;
-(void)setMatched:(BOOL)arg1;
-(BOOL)containsAccessPointMatchingBSSIDs:(id)arg1;

@end


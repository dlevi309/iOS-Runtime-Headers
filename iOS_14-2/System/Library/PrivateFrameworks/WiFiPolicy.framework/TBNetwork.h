/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

@class NSString, NSSet, NSArray;


@protocol TBNetwork <NSObject,TBScorable>
@property (nonatomic,readonly) NSString * remoteIdentifier; 
@property (nonatomic,readonly) NSString * SSID; 
@property (nonatomic,readonly) unsigned long long authMask; 
@property (nonatomic,readonly) NSString * authDescription; 
@property (nonatomic,readonly) NSString * attributesDescription; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (nonatomic,readonly) NSArray * ownerIdentifiers; 
@property (getter=isCaptive,nonatomic,readonly) BOOL captive; 
@property (getter=isMoving,nonatomic,readonly) BOOL moving; 
@property (getter=isSuspicious,nonatomic,readonly) BOOL suspicious; 
@property (getter=isPublic,nonatomic,readonly) BOOL public; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long venueGroup; 
@property (nonatomic,readonly) unsigned venueType; 
@property (nonatomic,readonly) unsigned long long tileKey; 
@property (nonatomic,readonly) unsigned long long accessPointCount; 
@property (nonatomic,readonly) double centroidLat; 
@property (nonatomic,readonly) double centroidLng; 
@optional
-(unsigned long long)tileKey;
-(unsigned long long)accessPointCount;
-(double)centroidLat;
-(double)centroidLng;

@required
-(NSString *)SSID;
-(id)dictionaryRepresentation;
-(BOOL)isCaptive;
-(unsigned long long)venueGroup;
-(NSString *)remoteIdentifier;
-(BOOL)isMoving;
-(unsigned long long)type;
-(unsigned)venueType;
-(BOOL)isPublic;
-(NSArray *)ownerIdentifiers;
-(NSSet *)accessPoints;
-(unsigned long long)authMask;
-(BOOL)isSuspicious;
-(NSString *)authDescription;
-(NSString *)attributesDescription;

@end


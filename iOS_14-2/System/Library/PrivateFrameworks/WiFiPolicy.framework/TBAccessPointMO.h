/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/TBAccessPoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate, TBNetworkMO;

@interface TBAccessPointMO : NSManagedObject <TBAccessPoint, NSSecureCoding, NSCoding>

@property (nonatomic,readonly) NSString * BSSID; 
@property (nonatomic,readonly) double latitude; 
@property (nonatomic,readonly) double longitude; 
@property (getter=isEdge,nonatomic,readonly) BOOL edge; 
@property (getter=isTCPGood,nonatomic,readonly) BOOL TCPGood; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TBScore> popularityScore; 
@property (nonatomic,readonly) id<TBScore> qualityScore; 
@property (nonatomic,copy) NSString * bssid; 
@property (nonatomic,copy) NSDate * created; 
@property (assign,nonatomic) BOOL edge; 
@property (assign,nonatomic) double lat; 
@property (assign,nonatomic) double lng; 
@property (assign,nonatomic) int popularityScoreValue; 
@property (assign,nonatomic) int qualityScoreValue; 
@property (assign,nonatomic) BOOL tcpGood; 
@property (nonatomic,retain) TBNetworkMO * network; 
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)fetchRequest;
+(id)generateNewAccessPointObjectFromMOC:(id)arg1 ;
+(void)removeAllAccessPointsInMOC:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)latitude;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEdge;
-(id<TBScore>)qualityScore;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)BSSID;
-(id<TBScore>)popularityScore;
-(BOOL)isTCPGood;
@end


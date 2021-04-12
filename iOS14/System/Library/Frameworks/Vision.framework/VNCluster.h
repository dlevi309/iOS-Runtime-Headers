/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface VNCluster : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldUpdateRepresentative;
	NSArray* _objects;
	unsigned long long _clusterId;
	unsigned long long _totalObjectCount;
	NSArray* _suggestedIdsForRepresentative;
	NSDictionary* _representativenessById;

}

@property (nonatomic,retain) NSArray * objects;                                    //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) unsigned long long clusterId;                         //@synthesize clusterId=_clusterId - In the implementation block
@property (assign,nonatomic) unsigned long long totalObjectCount;                  //@synthesize totalObjectCount=_totalObjectCount - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateRepresentative;                      //@synthesize shouldUpdateRepresentative=_shouldUpdateRepresentative - In the implementation block
@property (nonatomic,retain) NSArray * suggestedIdsForRepresentative;              //@synthesize suggestedIdsForRepresentative=_suggestedIdsForRepresentative - In the implementation block
@property (nonatomic,retain) NSDictionary * representativenessById;                //@synthesize representativenessById=_representativenessById - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)objects;
-(void)setObjects:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)totalObjectCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)clusterId;
-(void)setClusterId:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTotalObjectCount:(unsigned long long)arg1 ;
-(BOOL)shouldUpdateRepresentative;
-(void)setShouldUpdateRepresentative:(BOOL)arg1 ;
-(NSArray *)suggestedIdsForRepresentative;
-(void)setSuggestedIdsForRepresentative:(NSArray *)arg1 ;
-(NSDictionary *)representativenessById;
-(void)setRepresentativenessById:(NSDictionary *)arg1 ;
@end


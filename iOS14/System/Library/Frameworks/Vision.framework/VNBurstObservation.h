/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSArray, NSDictionary, NSString;

@interface VNBurstObservation : VNObservation {

	NSArray* _allImageIdentifiers;
	NSArray* _bestImageIdentifiers;
	NSDictionary* _allImageStats;
	NSString* _coverImageIdentifier;
	NSArray* _clusters;
	BOOL _isAction;
	BOOL _isPortrait;

}

@property (nonatomic,retain) NSArray * allImageIdentifiers;                //@synthesize allImageIdentifiers=_allImageIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * bestImageIdentifiers;               //@synthesize bestImageIdentifiers=_bestImageIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * allImageStats;                 //@synthesize allImageStats=_allImageStats - In the implementation block
@property (nonatomic,retain) NSString * coverImageIdentifier;              //@synthesize coverImageIdentifier=_coverImageIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * clusters;                           //@synthesize clusters=_clusters - In the implementation block
@property (assign,nonatomic) BOOL isAction;                                //@synthesize isAction=_isAction - In the implementation block
@property (assign,nonatomic) BOOL isPortrait;                              //@synthesize isPortrait=_isPortrait - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isPortrait;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)clusters;
-(BOOL)isAction;
-(NSArray *)bestImageIdentifiers;
-(NSArray *)allImageIdentifiers;
-(NSString *)coverImageIdentifier;
-(void)setAllImageIdentifiers:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClusters:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBestImageIdentifiers:(NSArray *)arg1 ;
-(NSDictionary *)allImageStats;
-(void)setAllImageStats:(NSDictionary *)arg1 ;
-(void)setCoverImageIdentifier:(NSString *)arg1 ;
-(void)setIsAction:(BOOL)arg1 ;
-(void)setIsPortrait:(BOOL)arg1 ;
@end


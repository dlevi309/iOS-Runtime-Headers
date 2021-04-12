/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, NSString;

@interface FCLocalArea : NSObject {

	BOOL _isBboxValid;
	NSArray* _regionIds;
	NSString* _identifier;
	NSArray* _bbox;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * bbox;                     //@synthesize bbox=_bbox - In the implementation block
@property (nonatomic,readonly) BOOL isBboxValid;                 //@synthesize isBboxValid=_isBboxValid - In the implementation block
@property (nonatomic,readonly) double minLat; 
@property (nonatomic,readonly) double maxLat; 
@property (nonatomic,readonly) double minLon; 
@property (nonatomic,readonly) double maxLon; 
@property (nonatomic,readonly) NSArray * regionIds;              //@synthesize regionIds=_regionIds - In the implementation block
-(NSArray *)bbox;
-(id)init;
-(double)minLat;
-(double)maxLat;
-(double)minLon;
-(double)maxLon;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)isBboxValid;
-(void)setBbox:(NSArray *)arg1 ;
-(BOOL)containsLocation:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSArray *)regionIds;
-(id)initWithIdentifier:(id)arg1 bbox:(id)arg2 regionIDs:(id)arg3 ;
-(BOOL)containsPointAtLatitude:(double)arg1 longitude:(double)arg2 ;
-(BOOL)isValue:(double)arg1 betweenValue:(double)arg2 andValue:(double)arg3 ;
@end


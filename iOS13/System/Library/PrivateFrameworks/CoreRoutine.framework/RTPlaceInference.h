/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocation, RTMapItem, NSString;

@interface RTPlaceInference : NSObject <NSSecureCoding> {

	RTLocation* _referenceLocation;
	RTMapItem* _mapItem;
	unsigned long long _userType;
	unsigned long long _placeType;
	double _confidence;

}

@property (nonatomic,readonly) RTLocation * referenceLocation;              //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;                         //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) unsigned long long userType;                 //@synthesize userType=_userType - In the implementation block
@property (nonatomic,readonly) unsigned long long placeType;                //@synthesize placeType=_placeType - In the implementation block
@property (nonatomic,readonly) double confidence;                           //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSString * preferredName; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidence;
-(unsigned long long)userType;
-(RTLocation *)referenceLocation;
-(unsigned long long)placeType;
-(NSString *)preferredName;
-(RTMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 userType:(unsigned long long)arg2 placeType:(unsigned long long)arg3 referenceLocation:(id)arg4 confidence:(double)arg5 ;
-(id)nameFromUserType:(unsigned long long)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNJSONOutput.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNRouteUpdateFreshness : NSObject <MNJSONOutput, NSSecureCoding, NSCopying> {

	double _maxAge;
	double _maxDisplacement;
	double _minAccuracy;

}

@property (assign,nonatomic) double maxAge;                         //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) double maxDisplacement;                //@synthesize maxDisplacement=_maxDisplacement - In the implementation block
@property (assign,nonatomic) double minAccuracy;                    //@synthesize minAccuracy=_minAccuracy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(double)maxAge;
-(double)minAccuracy;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setMaxAge:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)jsonDictionary;
-(void)setMaxDisplacement:(double)arg1 ;
-(void)setMinAccuracy:(double)arg1 ;
-(double)maxDisplacement;
@end


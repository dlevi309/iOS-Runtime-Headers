/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)maxAge;
-(void)setMaxAge:(double)arg1 ;
-(id)jsonDictionary;
-(void)setMaxDisplacement:(double)arg1 ;
-(void)setMinAccuracy:(double)arg1 ;
-(double)maxDisplacement;
-(double)minAccuracy;
@end


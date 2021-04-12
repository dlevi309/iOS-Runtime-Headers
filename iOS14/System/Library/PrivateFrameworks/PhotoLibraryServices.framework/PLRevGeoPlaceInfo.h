/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PLRevGeoPlaceInfo : NSObject <NSSecureCoding> {

	BOOL _hasArea;
	NSString* _placeName;
	double _minimumArea;
	double _maximumArea;

}

@property (nonatomic,copy,readonly) NSString * placeName;              //@synthesize placeName=_placeName - In the implementation block
@property (nonatomic,readonly) BOOL hasArea;                           //@synthesize hasArea=_hasArea - In the implementation block
@property (nonatomic,readonly) double minimumArea;                     //@synthesize minimumArea=_minimumArea - In the implementation block
@property (nonatomic,readonly) double maximumArea;                     //@synthesize maximumArea=_maximumArea - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(double)minimumArea;
-(id)initWithPlaceName:(id)arg1 ;
-(void)addPlaceInfoArea:(double)arg1 ;
-(BOOL)hasArea;
-(NSString *)placeName;
-(id)initWithCoder:(id)arg1 ;
-(double)maximumArea;
@end


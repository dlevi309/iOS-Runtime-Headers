/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PLRevGeoPlaceAnnotation : NSObject <NSCopying> {

	int _placeLevel;
	NSString* _placeName;

}

@property (assign,nonatomic) int placeLevel;                    //@synthesize placeLevel=_placeLevel - In the implementation block
@property (nonatomic,retain) NSString * placeName;              //@synthesize placeName=_placeName - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)placeName;
-(int)placeLevel;
-(void)setPlaceLevel:(int)arg1 ;
-(void)setPlaceName:(NSString *)arg1 ;
@end


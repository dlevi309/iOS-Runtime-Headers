/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString, NSDate, NSNumber;


@protocol PLAssetDateDescriptor <NSObject>
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSDate * utcDate; 
@property (nonatomic,readonly) NSString * rawTimeZoneName; 
@property (nonatomic,readonly) NSNumber * rawTimeZoneOffsetValue; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@required
-(NSString *)uuid;
-(CLLocationCoordinate2D)coordinate;
-(NSDate *)utcDate;
-(id)localDateAndCreateIfNeededWithLocalDateCreator:(id)arg1;
-(NSString *)rawTimeZoneName;
-(NSNumber *)rawTimeZoneOffsetValue;

@end


/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CLLocationCoordinate2D)coordinate;
-(NSString *)uuid;
-(id)localDateAndCreateIfNeededWithLocalDateCreator:(id)arg1;
-(NSDate *)utcDate;
-(NSString *)rawTimeZoneName;
-(NSNumber *)rawTimeZoneOffsetValue;

@end


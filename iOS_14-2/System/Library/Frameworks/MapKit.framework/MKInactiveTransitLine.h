/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

@class NSString;


@protocol MKInactiveTransitLine <NSObject>
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) NSString * serviceResumesDescription; 
@required
-(NSString *)serviceResumesDescription;
-(id<GEOTransitLine>)line;

@end


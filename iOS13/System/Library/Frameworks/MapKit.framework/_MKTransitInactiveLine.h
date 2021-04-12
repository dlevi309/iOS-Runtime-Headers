/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKInactiveTransitLine.h>

@protocol GEOTransitLine;
@class NSString, NSDate, NSTimeZone;

@interface _MKTransitInactiveLine : NSObject <MKInactiveTransitLine> {

	id<GEOTransitLine> _line;
	BOOL _blocked;
	NSDate* _serviceResumesDate;
	NSTimeZone* _timeZone;
	NSDate* _referenceDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) NSString * serviceResumesDescription; 
-(id<GEOTransitLine>)line;
-(NSString *)serviceResumesDescription;
-(id)initWithTransitLine:(id)arg1 blocked:(BOOL)arg2 serviceResumesDate:(id)arg3 timeZone:(id)arg4 referenceDate:(id)arg5 ;
@end


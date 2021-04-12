/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class GEOMapService, NSString, NSArray, NSData;

@interface RTCalendarExporter : NSObject {

	GEOMapService* _mapService;
	BOOL _compress;
	NSString* _calendarName;
	NSString* _calendarColor;
	NSArray* _locationsOfInterest;

}

@property (assign,nonatomic) BOOL compress;                            //@synthesize compress=_compress - In the implementation block
@property (nonatomic,copy) NSString * calendarName;                    //@synthesize calendarName=_calendarName - In the implementation block
@property (nonatomic,copy) NSString * calendarColor;                   //@synthesize calendarColor=_calendarColor - In the implementation block
@property (nonatomic,copy) NSArray * locationsOfInterest;              //@synthesize locationsOfInterest=_locationsOfInterest - In the implementation block
@property (readonly) NSData * data; 
-(id)init;
-(id)calendar;
-(NSData *)data;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)components;
-(id)document;
-(NSArray *)locationsOfInterest;
-(NSString *)calendarColor;
-(void)setCalendarColor:(NSString *)arg1 ;
-(BOOL)compress;
-(NSString *)calendarName;
-(void)setCalendarName:(NSString *)arg1 ;
-(void)setCompress:(BOOL)arg1 ;
-(void)setLocationsOfInterest:(NSArray *)arg1 ;
-(id)initWithMapService:(id)arg1 ;
@end


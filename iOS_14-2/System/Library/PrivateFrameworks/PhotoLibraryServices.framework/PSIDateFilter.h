/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PSIDate, NSString;

@interface PSIDateFilter : NSObject <NSCopying> {

	PSIDate* _singleDate;
	PSIDate* _startDate;
	PSIDate* _endDate;
	NSString* _displayString;

}

@property (readonly) PSIDate * singleDate;                           //@synthesize singleDate=_singleDate - In the implementation block
@property (readonly) PSIDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (readonly) PSIDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSString * displayString;                 //@synthesize displayString=_displayString - In the implementation block
@property (readonly) long long int64RepresentationMask; 
-(PSIDate *)endDate;
-(NSString *)displayString;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(PSIDate *)startDate;
-(void)setDisplayString:(NSString *)arg1 ;
-(long long)int64RepresentationMask;
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
-(id)initWithEndDateComponents:(id)arg1 ;
-(id)initWithStartDateComponents:(id)arg1 ;
-(id)initWithSingleDateComponents:(id)arg1 ;
-(PSIDate *)singleDate;
-(id)initWithSingleDate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


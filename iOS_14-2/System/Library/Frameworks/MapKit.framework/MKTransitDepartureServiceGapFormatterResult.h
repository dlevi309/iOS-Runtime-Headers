/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSString;

@interface MKTransitDepartureServiceGapFormatterResult : NSObject {

	NSString* _format;
	NSString* _dateDescription;
	unsigned long long _dateFormat;

}

@property (nonatomic,copy,readonly) NSString * format;                       //@synthesize format=_format - In the implementation block
@property (nonatomic,copy,readonly) NSString * dateDescription;              //@synthesize dateDescription=_dateDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long dateFormat;                //@synthesize dateFormat=_dateFormat - In the implementation block
@property (nonatomic,readonly) NSString * formattedString; 
-(NSString *)format;
-(id)initWithFormat:(id)arg1 dateDescription:(id)arg2 dateFormat:(unsigned long long)arg3 ;
-(NSString *)dateDescription;
-(unsigned long long)dateFormat;
-(NSString *)formattedString;
@end


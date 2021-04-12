/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)dateFormat;
-(NSString *)format;
-(NSString *)formattedString;
-(NSString *)dateDescription;
-(id)initWithFormat:(id)arg1 dateDescription:(id)arg2 dateFormat:(unsigned long long)arg3 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PSIDate : NSObject {

	long long _int64Representation;
	long long _int64RepresentationMask;

}

@property (readonly) long long era; 
@property (readonly) long long year; 
@property (readonly) long long month; 
@property (readonly) long long day; 
@property (readonly) long long int64Representation;                  //@synthesize int64Representation=_int64Representation - In the implementation block
@property (readonly) long long int64RepresentationMask;              //@synthesize int64RepresentationMask=_int64RepresentationMask - In the implementation block
+(id)distantFuture;
+(id)distantPast;
-(long long)day;
-(long long)year;
-(long long)month;
-(id)initWithInt64Representation:(long long)arg1 ;
-(long long)int64Representation;
-(long long)era;
-(id)description;
-(long long)int64RepresentationMask;
-(id)dateComponents;
-(unsigned long long)hash;
-(id)initWithDateComponents:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUniversalDate:(id)arg1 calendar:(id)arg2 ;
@end


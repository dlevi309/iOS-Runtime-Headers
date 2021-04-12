/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)era;
-(long long)year;
-(long long)month;
-(long long)day;
-(id)dateComponents;
-(id)initWithUniversalDate:(id)arg1 calendar:(id)arg2 ;
-(long long)int64RepresentationMask;
-(long long)int64Representation;
-(id)initWithInt64Representation:(long long)arg1 ;
-(id)initWithDateComponents:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface STGenericIntentLocation : NSObject <NSSecureCoding> {

	BOOL _isLatLong;
	NSString* _name;
	double _latitude;
	double _longitude;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL isLatLong;                //@synthesize isLatLong=_isLatLong - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)latitude;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 ;
-(BOOL)isLatLong;
-(void)setIsLatLong:(BOOL)arg1 ;
@end


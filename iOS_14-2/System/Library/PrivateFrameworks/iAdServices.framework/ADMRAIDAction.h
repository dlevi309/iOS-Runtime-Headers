/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
*/

#import <iAdServices/iAdServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface ADMRAIDAction : NSObject <NSSecureCoding, NSCopying> {

	long long _type;
	NSURL* _url;
	double _maximumExpandWidth;
	double _maximumExpandHeight;
	NSDictionary* _calendarEventInfo;

}

@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * url;                                     //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) double maximumExpandWidth;                     //@synthesize maximumExpandWidth=_maximumExpandWidth - In the implementation block
@property (assign,nonatomic) double maximumExpandHeight;                    //@synthesize maximumExpandHeight=_maximumExpandHeight - In the implementation block
@property (nonatomic,readonly) BOOL opensNewsLink; 
@property (nonatomic,retain) NSDictionary * calendarEventInfo;              //@synthesize calendarEventInfo=_calendarEventInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptionForActionType:(long long)arg1 ;
+(id)errorDescriptionForActionType:(long long)arg1 errorType:(long long)arg2 ;
+(BOOL)doesURLOpenNews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSURL *)url;
-(id)description;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)opensNewsLink;
-(NSDictionary *)calendarEventInfo;
-(void)setCalendarEventInfo:(NSDictionary *)arg1 ;
-(void)setMaximumExpandWidth:(double)arg1 ;
-(void)setMaximumExpandHeight:(double)arg1 ;
-(double)maximumExpandWidth;
-(double)maximumExpandHeight;
@end


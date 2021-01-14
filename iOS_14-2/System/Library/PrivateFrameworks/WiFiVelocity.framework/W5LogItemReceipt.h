/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class W5LogItemRequest, NSArray, NSDictionary;

@interface W5LogItemReceipt : NSObject <NSCopying, NSSecureCoding> {

	W5LogItemRequest* _request;
	NSArray* _relativeURLs;
	NSDictionary* _info;
	double _startedAt;
	double _completedAt;

}

@property (nonatomic,copy) W5LogItemRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSArray * relativeURLs;                  //@synthesize relativeURLs=_relativeURLs - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                     //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) double startedAt;                      //@synthesize startedAt=_startedAt - In the implementation block
@property (assign,nonatomic) double completedAt;                    //@synthesize completedAt=_completedAt - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)info;
-(void)setRequest:(W5LogItemRequest *)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStartedAt:(double)arg1 ;
-(W5LogItemRequest *)request;
-(id)description;
-(void)setInfo:(NSDictionary *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)startedAt;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqualToLogItemReceipt:(id)arg1 ;
-(void)setRelativeURLs:(NSArray *)arg1 ;
-(void)setCompletedAt:(double)arg1 ;
-(NSArray *)relativeURLs;
-(double)completedAt;
@end


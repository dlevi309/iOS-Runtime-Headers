/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)info;
-(void)setRequest:(W5LogItemRequest *)arg1 ;
-(W5LogItemRequest *)request;
-(void)setInfo:(NSDictionary *)arg1 ;
-(double)startedAt;
-(void)setStartedAt:(double)arg1 ;
-(BOOL)isEqualToLogItemReceipt:(id)arg1 ;
-(void)setRelativeURLs:(NSArray *)arg1 ;
-(void)setCompletedAt:(double)arg1 ;
-(NSArray *)relativeURLs;
-(double)completedAt;
@end


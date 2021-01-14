/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface CKRequestInfo : NSObject <NSSecureCoding> {

	NSString* _requestUUID;
	NSDictionary* _responseHTTPHeaders;
	NSDictionary* _w3cNavigationTiming;

}

@property (nonatomic,copy,readonly) NSString * requestUUID;                          //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseHTTPHeaders;              //@synthesize responseHTTPHeaders=_responseHTTPHeaders - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * w3cNavigationTiming;              //@synthesize w3cNavigationTiming=_w3cNavigationTiming - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)requestUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)responseHTTPHeaders;
-(id)initWithRequestUUID:(id)arg1 responseHTTPHeaders:(id)arg2 w3cTiming:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)w3cNavigationTiming;
@end


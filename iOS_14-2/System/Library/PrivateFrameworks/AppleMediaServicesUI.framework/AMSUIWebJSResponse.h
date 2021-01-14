/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, AMSUIWebJSRequest;

@interface AMSUIWebJSResponse : NSObject <NSSecureCoding> {

	NSDictionary* _body;
	double _duration;
	AMSUIWebJSRequest* _originalRequest;

}

@property (nonatomic,retain) NSDictionary * body;                                //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) AMSUIWebJSRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBody:(NSDictionary *)arg1 ;
-(NSDictionary *)body;
-(AMSUIWebJSRequest *)originalRequest;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(id)initWithRequest:(id)arg1 duration:(double)arg2 ;
@end


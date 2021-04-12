/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface AFSiriResponse : NSObject <NSSecureCoding> {

	NSUUID* _requestIdentifier;

}
+(BOOL)supportsSecureCoding;
-(id)_initWithRequestIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 ;
-(BOOL)_isForRequest:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


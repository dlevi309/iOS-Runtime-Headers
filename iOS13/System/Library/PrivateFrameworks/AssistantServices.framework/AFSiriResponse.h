/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface AFSiriResponse : NSObject <NSSecureCoding> {

	NSUUID* _requestIdentifier;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 ;
-(BOOL)_isForRequest:(id)arg1 ;
-(id)_initWithRequestIdentifier:(id)arg1 ;
@end


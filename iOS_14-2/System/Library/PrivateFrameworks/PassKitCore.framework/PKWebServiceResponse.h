/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKWebServiceResponse : NSObject <NSSecureCoding> {

	NSData* _rawData;
	id _JSONObject;

}

@property (nonatomic,readonly) NSData * rawData;              //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,readonly) id JSONObject;                 //@synthesize JSONObject=_JSONObject - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithData:(id)arg1 ;
-(id)JSONObject;
-(NSData *)rawData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


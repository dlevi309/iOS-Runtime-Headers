/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)rawData;
-(id)JSONObject;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface _SFSignedData : NSObject <NSCopying, NSSecureCoding> {

	id _signedDataInternal;

}

@property (readonly) NSData * data; 
@property (readonly) NSData * signature; 
+(BOOL)supportsSecureCoding;
-(NSData *)signature;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 signature:(id)arg2 ;
@end


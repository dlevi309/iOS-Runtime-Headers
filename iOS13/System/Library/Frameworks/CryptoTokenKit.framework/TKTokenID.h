/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TKTokenID : NSObject <NSCopying, NSSecureCoding> {

	NSString* _stringRepresentation;

}

@property (readonly) NSString * stringRepresentation;              //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (readonly) NSString * classID; 
@property (readonly) NSString * instanceID; 
+(BOOL)supportsSecureCoding;
+(id)encodedObjectID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTokenID:(id)arg1 ;
-(NSString *)stringRepresentation;
-(NSString *)classID;
-(NSString *)instanceID;
-(id)initWithClassID:(id)arg1 instanceID:(id)arg2 ;
-(id)decodedObjectID:(id)arg1 error:(id*)arg2 ;
@end


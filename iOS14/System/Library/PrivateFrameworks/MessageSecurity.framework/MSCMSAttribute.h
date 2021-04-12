/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

#import <MessageSecurity/MessageSecurity-Structs.h>
#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class MSOID, NSArray, NSData;

@interface MSCMSAttribute : NSObject <MSCMSAttributeCoder> {

	MSOID* _attributeType;
	NSArray* _attributeValues;
	NSData* _attributeDERData;
	Attribute* _encodedAttribute;

}

@property (retain) NSData * attributeDERData;                       //@synthesize attributeDERData=_attributeDERData - In the implementation block
@property (assign) Attribute* encodedAttribute;                     //@synthesize encodedAttribute=_encodedAttribute - In the implementation block
@property (retain,readonly) MSOID * attributeType;                  //@synthesize attributeType=_attributeType - In the implementation block
@property (retain,readonly) NSArray * attributeValues;              //@synthesize attributeValues=_attributeValues - In the implementation block
+(id)decodeAttribute:(Attribute*)arg1 error:(id*)arg2 ;
-(MSOID *)attributeType;
-(NSArray *)attributeValues;
-(void)dealloc;
-(id)encodeAttributeWithError:(id*)arg1 ;
-(Attribute*)generateAttributeStruct;
-(id)initWithAttributeStruct:(Attribute*)arg1 error:(id*)arg2 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(id)initWithDER:(id)arg1 ;
-(id)initWithAttributeType:(id)arg1 values:(id)arg2 ;
-(NSData *)attributeDERData;
-(void)setAttributeDERData:(NSData *)arg1 ;
-(Attribute*)encodedAttribute;
-(void)setEncodedAttribute:(Attribute*)arg1 ;
@end


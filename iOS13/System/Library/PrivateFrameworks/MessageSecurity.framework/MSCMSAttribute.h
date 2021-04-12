/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(MSOID *)attributeType;
-(NSArray *)attributeValues;
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


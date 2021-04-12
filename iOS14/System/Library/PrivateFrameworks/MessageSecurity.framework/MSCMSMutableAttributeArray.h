/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

#import <MessageSecurity/MessageSecurity-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray;

@interface MSCMSMutableAttributeArray : NSMutableArray {

	NSMutableArray* _attributes;
	Attribute* _encodedAttributes;
	NSMutableArray* _genericAttributes;

}

@property (retain) NSMutableArray * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (assign) Attribute* encodedAttributes;                    //@synthesize encodedAttributes=_encodedAttributes - In the implementation block
@property (retain) NSMutableArray * genericAttributes;              //@synthesize genericAttributes=_genericAttributes - In the implementation block
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(void)removeAttributes:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)attributes;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(Attribute*)encodeAttributesWithError:(id*)arg1 ;
-(id)calculateAttributesWithDigest:(id)arg1 error:(id*)arg2 ;
-(id)getAttributesWithType:(id)arg1 ;
-(Attribute*)encodedAttributes;
-(void)setEncodedAttributes:(Attribute*)arg1 ;
-(NSMutableArray *)genericAttributes;
-(void)setGenericAttributes:(NSMutableArray *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(NSMutableArray *)attributes;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(void)reset;
-(void)removeAttributes:(id)arg1 ;
-(Attribute*)encodeAttributesWithError:(id*)arg1 ;
-(id)calculateAttributesWithDigest:(id)arg1 error:(id*)arg2 ;
-(id)getAttributesWithType:(id)arg1 ;
-(Attribute*)encodedAttributes;
-(void)setEncodedAttributes:(Attribute*)arg1 ;
-(NSMutableArray *)genericAttributes;
-(void)setGenericAttributes:(NSMutableArray *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSArray;

@interface NUGLVertexLayout : NSObject {

	NSArray* _attributes;
	long long _size;

}

@property (readonly) long long count; 
@property (readonly) NSArray * attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (readonly) long long size;                        //@synthesize size=_size - In the implementation block
@property (readonly) NSArray * attributeNames; 
-(id)init;
-(long long)size;
-(long long)count;
-(id)initWithAttributes:(id)arg1 ;
-(NSArray *)attributes;
-(NSArray *)attributeNames;
-(int)offsetAtIndex:(unsigned long long)arg1 ;
-(long long)offsetForAttribute:(id)arg1 ;
-(id)attributeWithName:(id)arg1 ;
-(unsigned long long)indexOfAttribute:(id)arg1 ;
@end


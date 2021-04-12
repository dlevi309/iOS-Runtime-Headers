/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)count;
-(long long)size;
-(NSArray *)attributes;
-(NSArray *)attributeNames;
-(id)initWithAttributes:(id)arg1 ;
-(int)offsetAtIndex:(unsigned long long)arg1 ;
-(id)attributeWithName:(id)arg1 ;
-(long long)offsetForAttribute:(id)arg1 ;
-(unsigned long long)indexOfAttribute:(id)arg1 ;
@end


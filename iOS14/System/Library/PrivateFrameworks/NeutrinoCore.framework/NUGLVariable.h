/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@interface NUGLVariable : NSObject {

	unsigned _type;
	int _size;
	int _location;

}

@property (readonly) unsigned type;                   //@synthesize type=_type - In the implementation block
@property (readonly) int size;                        //@synthesize size=_size - In the implementation block
@property (readonly) int location;                    //@synthesize location=_location - In the implementation block
@property (readonly) unsigned valueType; 
-(unsigned)valueType;
-(id)initWithType:(unsigned)arg1 ;
-(id)init;
-(int)size;
-(int)location;
-(id)description;
-(unsigned)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(unsigned)arg1 size:(int)arg2 ;
-(id)initWithType:(unsigned)arg1 size:(int)arg2 location:(int)arg3 ;
-(BOOL)isEqualToVariable:(id)arg1 ;
@end


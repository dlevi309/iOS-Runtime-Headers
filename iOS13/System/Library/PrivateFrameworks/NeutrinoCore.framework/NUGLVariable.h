/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)type;
-(int)size;
-(int)location;
-(id)initWithType:(unsigned)arg1 ;
-(unsigned)valueType;
-(id)initWithType:(unsigned)arg1 size:(int)arg2 ;
-(id)initWithType:(unsigned)arg1 size:(int)arg2 location:(int)arg3 ;
-(BOOL)isEqualToVariable:(id)arg1 ;
@end


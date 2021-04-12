/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@class NSString;

@interface MTLPostVertexDumpOutput : NSObject {

	NSString* _airMDType;
	unsigned long long _dataType;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;
	NSString* _name;
	unsigned long long _offset;

}

@property (readonly) NSString * airMDType;                        //@synthesize airMDType=_airMDType - In the implementation block
@property (readonly) unsigned long long dataType;                 //@synthesize dataType=_dataType - In the implementation block
@property (readonly) unsigned long long pixelFormat;              //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (readonly) unsigned long long aluType;                  //@synthesize aluType=_aluType - In the implementation block
@property (readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned long long)pixelFormat;
-(unsigned long long)dataType;
-(unsigned long long)offset;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)aluType;
-(id)initWithAirMDType:(id)arg1 dataType:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 aluType:(unsigned long long)arg4 name:(id)arg5 offset:(unsigned long long)arg6 ;
-(NSString *)airMDType;
@end


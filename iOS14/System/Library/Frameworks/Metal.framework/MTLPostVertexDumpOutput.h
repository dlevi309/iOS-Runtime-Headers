/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)pixelFormat;
-(NSString *)name;
-(unsigned long long)offset;
-(id)description;
-(NSString *)airMDType;
-(unsigned long long)aluType;
-(id)initWithAirMDType:(id)arg1 dataType:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 aluType:(unsigned long long)arg4 name:(id)arg5 offset:(unsigned long long)arg6 ;
-(void)dealloc;
@end


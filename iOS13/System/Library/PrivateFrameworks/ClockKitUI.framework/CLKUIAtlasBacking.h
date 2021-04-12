/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/


#import <ClockKitUI/ClockKitUI-Structs.h>
@class NSData, CLKUIMmapFile, NSString;

@interface CLKUIAtlasBacking : NSObject {

	NSData* _data;
	CLKUIMmapFile* _mmapFile;
	NSString* _uuid;
	CLKUIAtlasBackingStructure* _structure;

}

@property (nonatomic,readonly) NSString * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) const void* bytes; 
@property (nonatomic,readonly) unsigned long long bytesLength; 
@property (nonatomic,readonly) unsigned long long width; 
@property (nonatomic,readonly) unsigned long long height; 
@property (nonatomic,readonly) unsigned long long planes; 
@property (nonatomic,readonly) unsigned long long planeLength; 
@property (nonatomic,readonly) unsigned long long bytesPerPixel; 
@property (nonatomic,readonly) unsigned long long mipCount; 
@property (nonatomic,readonly) unsigned char format; 
@property (nonatomic,readonly) BOOL mipmaps; 
@property (assign,nonatomic) unsigned char filter; 
@property (assign,nonatomic) unsigned char wrap; 
@property (nonatomic,readonly) CLKUIAtlasBackingStructure* structure;              //@synthesize structure=_structure - In the implementation block
+(id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2 mipmap:(BOOL)arg3 ;
+(id)atlasBackingWithBytes:(const void*)arg1 length:(unsigned long long)arg2 mmapFile:(id)arg3 uuid:(id)arg4 ;
+(id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2 ;
+(id)atlasBackingWithArt:(id)arg1 uuid:(id)arg2 ;
+(id)atlasBackingWithUuid:(id)arg1 structure:(CLKUIAtlasBackingStructure*)arg2 data:(id)arg3 ;
-(const void*)bytes;
-(unsigned long long)bytesLength;
-(NSString *)uuid;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned char)format;
-(unsigned long long)bytesPerPixel;
-(void)setFilter:(unsigned char)arg1 ;
-(unsigned char)filter;
-(BOOL)writeToFile:(id)arg1 error:(id*)arg2 ;
-(unsigned char)wrap;
-(void)setWrap:(unsigned char)arg1 ;
-(CLKUIAtlasBackingStructure*)structure;
-(unsigned long long)planes;
-(id)initWithUuid:(id)arg1 structure:(CLKUIAtlasBackingStructure*)arg2 data:(id)arg3 ;
-(id)initWithUuid:(id)arg1 structure:(CLKUIAtlasBackingStructure*)arg2 mmapFile:(id)arg3 ;
-(BOOL)mipmaps;
-(unsigned long long)mipCount;
-(unsigned long long)planeLength;
@end


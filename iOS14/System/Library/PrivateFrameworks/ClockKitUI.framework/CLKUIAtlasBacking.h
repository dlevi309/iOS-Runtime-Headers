/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)atlasBackingWithArt:(id)arg1 uuid:(id)arg2 ;
+(id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2 ;
+(id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2 mipmap:(BOOL)arg3 ;
+(id)atlasBackingWithUuid:(id)arg1 structure:(CLKUIAtlasBackingStructure*)arg2 data:(id)arg3 ;
+(id)atlasBackingWithBytes:(const void*)arg1 length:(unsigned long long)arg2 mmapFile:(id)arg3 uuid:(id)arg4 ;
-(unsigned char)format;
-(void)setFilter:(unsigned char)arg1 ;
-(NSString *)uuid;
-(unsigned char)filter;
-(unsigned long long)width;
-(unsigned char)wrap;
-(unsigned long long)bytesLength;
-(const void*)bytes;
-(unsigned long long)height;
-(unsigned long long)planes;
-(BOOL)writeToFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)mipmaps;
-(void)setWrap:(unsigned char)arg1 ;
-(unsigned long long)bytesPerPixel;
-(CLKUIAtlasBackingStructure*)structure;
-(id)initWithUuid:(id)arg1 structure:(CLKUIAtlasBackingStructure*)arg2 data:(id)arg3 ;
-(id)initWithUuid:(id)arg1 structure:(CLKUIAtlasBackingStructure*)arg2 mmapFile:(id)arg3 ;
-(unsigned long long)mipCount;
-(unsigned long long)planeLength;
@end


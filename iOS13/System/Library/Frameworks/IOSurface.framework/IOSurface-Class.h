/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
*/

#import <IOSurface/IOSurface-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IOSurface : NSObject <NSSecureCoding> {

	void* _impl;

}

@property (readonly) long long allocationSize; 
@property (readonly) long long width; 
@property (readonly) long long height; 
@property (readonly) void* baseAddress; 
@property (readonly) unsigned pixelFormat; 
@property (readonly) long long bytesPerRow; 
@property (readonly) long long bytesPerElement; 
@property (readonly) long long elementWidth; 
@property (readonly) long long elementHeight; 
@property (readonly) unsigned seed; 
@property (readonly) unsigned long long planeCount; 
@property (getter=isInUse,readonly) BOOL inUse; 
@property (readonly) int localUseCount; 
@property (readonly) BOOL allowsPixelSizeCasting; 
+(id)bs_IOSurfaceWithWidth:(long long)arg1 height:(long long)arg2 options:(unsigned long long*)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)CGImageBuilder;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithMachPort:(unsigned)arg1 ;
-(long long)width;
-(long long)height;
-(unsigned long long)registryID;
-(void*)baseAddress;
-(long long)bytesPerRow;
-(unsigned)pixelFormat;
-(id)initWithProperties:(id)arg1 ;
-(unsigned)seed;
-(int)lockWithOptions:(unsigned)arg1 seed:(unsigned*)arg2 ;
-(int)unlockWithOptions:(unsigned)arg1 seed:(unsigned*)arg2 ;
-(long long)allocationSize;
-(void)incrementUseCount;
-(void)decrementUseCount;
-(id)initWithSurfaceID:(unsigned)arg1 ;
-(id)initWithClientBuffer:(IOSurfaceClientRef)arg1 ;
-(long long)bytesPerElement;
-(long long)elementWidth;
-(long long)elementHeight;
-(unsigned long long)planeCount;
-(long long)widthOfPlaneAtIndex:(unsigned long long)arg1 ;
-(long long)heightOfPlaneAtIndex:(unsigned long long)arg1 ;
-(long long)bytesPerRowOfPlaneAtIndex:(unsigned long long)arg1 ;
-(long long)bytesPerElementOfPlaneAtIndex:(unsigned long long)arg1 ;
-(long long)elementWidthOfPlaneAtIndex:(unsigned long long)arg1 ;
-(long long)elementHeightOfPlaneAtIndex:(unsigned long long)arg1 ;
-(void*)baseAddressOfPlaneAtIndex:(unsigned long long)arg1 ;
-(void)setAttachment:(id)arg1 forKey:(id)arg2 ;
-(id)attachmentForKey:(id)arg1 ;
-(void)removeAttachmentForKey:(id)arg1 ;
-(void)setAllAttachments:(id)arg1 ;
-(id)allAttachments;
-(void)removeAllAttachments;
-(int)localUseCount;
-(BOOL)isInUse;
-(BOOL)isDisplayable;
-(BOOL)isSysMemOnly;
-(BOOL)allowsPixelSizeCasting;
-(int)setPurgeable:(unsigned)arg1 oldState:(unsigned*)arg2 ;
-(unsigned long long)protectionOptions;
-(BOOL)supportsProtectionOptions:(unsigned long long)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)timestampAtIndex:(unsigned long long)arg1 ;
@end


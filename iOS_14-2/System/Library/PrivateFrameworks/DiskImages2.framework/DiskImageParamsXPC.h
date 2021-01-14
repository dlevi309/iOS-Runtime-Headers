/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <DiskImages2/DiskImages2-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class BackendXPC;

@interface DiskImageParamsXPC : NSObject <NSSecureCoding, NSCoding> {

	BackendXPC* _backendXPC;
	unsigned long long _blockSize;

}

@property (nonatomic,retain) BackendXPC * backendXPC;                     //@synthesize backendXPC=_backendXPC - In the implementation block
@property (nonatomic,readonly) BOOL isWritableFormat; 
@property (nonatomic,readonly) unsigned long long numBlocks; 
@property (assign,nonatomic) unsigned long long blockSize;                //@synthesize blockSize=_blockSize - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithUnlockedBackendXPC:(id)arg1 error:(id*)arg2 ;
+(id)newWithURL:(id)arg1 fileOpenMode:(unsigned short)arg2 error:(id*)arg3 ;
-(unsigned long long)blockSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setBlockSize:(unsigned long long)arg1 ;
-(BOOL)isWritableFormat;
-(BackendXPC *)backendXPC;
-(void)setBackendXPC:(BackendXPC *)arg1 ;
-(id)initWithBackendXPC:(id)arg1 ;
-(unique_ptr<DiskImage, std::__1::default_delete<DiskImage> >*)createDiskImage;
-(unsigned long long)numBlocks;
@end


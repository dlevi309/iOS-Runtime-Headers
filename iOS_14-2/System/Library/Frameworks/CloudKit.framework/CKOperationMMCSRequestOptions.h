/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding> {

	BOOL _resumableContainerLimpMode;
	BOOL _chunkingLibraryCorruptionMode;
	BOOL _insufficientDiskSpaceMode;

}

@property (assign,nonatomic) BOOL resumableContainerLimpMode;                 //@synthesize resumableContainerLimpMode=_resumableContainerLimpMode - In the implementation block
@property (assign,nonatomic) BOOL chunkingLibraryCorruptionMode;              //@synthesize chunkingLibraryCorruptionMode=_chunkingLibraryCorruptionMode - In the implementation block
@property (assign,nonatomic) BOOL insufficientDiskSpaceMode;                  //@synthesize insufficientDiskSpaceMode=_insufficientDiskSpaceMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)resumableContainerLimpMode;
-(void)setResumableContainerLimpMode:(BOOL)arg1 ;
-(BOOL)chunkingLibraryCorruptionMode;
-(void)setChunkingLibraryCorruptionMode:(BOOL)arg1 ;
-(BOOL)insufficientDiskSpaceMode;
-(void)setInsufficientDiskSpaceMode:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


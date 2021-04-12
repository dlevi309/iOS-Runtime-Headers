/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding> {

	BOOL _resumableContainerLimpMode;
	BOOL _chunkingLibraryCorruptionMode;

}

@property (assign,nonatomic) BOOL resumableContainerLimpMode;                 //@synthesize resumableContainerLimpMode=_resumableContainerLimpMode - In the implementation block
@property (assign,nonatomic) BOOL chunkingLibraryCorruptionMode;              //@synthesize chunkingLibraryCorruptionMode=_chunkingLibraryCorruptionMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)resumableContainerLimpMode;
-(void)setResumableContainerLimpMode:(BOOL)arg1 ;
-(BOOL)chunkingLibraryCorruptionMode;
-(void)setChunkingLibraryCorruptionMode:(BOOL)arg1 ;
@end


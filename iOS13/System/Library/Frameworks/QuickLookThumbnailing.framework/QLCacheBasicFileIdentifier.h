/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding> {

	unsigned long long _fileId;

}

@property (readonly) unsigned long long fileId;              //@synthesize fileId=_fileId - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)versionedFileIdentifierClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)fileId;
-(id)initWithFileId:(unsigned long long)arg1 ;
@end


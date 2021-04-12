/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding> {

	NSString* _fileProviderIdentifier;
	NSString* _itemIdentifier;

}

@property (copy,readonly) NSString * fileProviderIdentifier;              //@synthesize fileProviderIdentifier=_fileProviderIdentifier - In the implementation block
@property (copy,readonly) NSString * itemIdentifier;                      //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)versionedFileIdentifierClass;
+(id)knownFileProviderIdentifiersSoFar;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(NSString *)fileProviderIdentifier;
-(id)initWithFileProviderIdentifier:(id)arg1 itemIdentifier:(id)arg2 ;
@end


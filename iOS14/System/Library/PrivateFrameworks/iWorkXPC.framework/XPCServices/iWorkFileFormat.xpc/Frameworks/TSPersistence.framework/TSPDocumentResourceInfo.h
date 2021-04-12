/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSPersistence/TSUCloudKitResourceInfo.h>

@class NSString, NSSet, TSUColor;

@interface TSPDocumentResourceInfo : NSObject <NSCopying, TSUCloudKitResourceInfo> {

	NSString* _digestString;
	NSString* _locator;
	NSString* _fileExtension;
	unsigned long long _fileSize;
	NSSet* _tags;
	TSUColor* _fallbackColor;
	CGSize _pixelSize;

}

@property (nonatomic,copy,readonly) NSString * digestString;                          //@synthesize digestString=_digestString - In the implementation block
@property (nonatomic,copy,readonly) NSString * locator;                               //@synthesize locator=_locator - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileExtension;                         //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,readonly) unsigned long long fileSize;                           //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy,readonly) NSSet * tags;                                     //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                                      //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,copy,readonly) TSUColor * fallbackColor;                         //@synthesize fallbackColor=_fallbackColor - In the implementation block
@property (nonatomic,readonly) NSString * assetFieldName; 
@property (nonatomic,readonly) long long assetFieldType; 
@property (nonatomic,readonly) NSString * assetFilename; 
@property (nonatomic,readonly) NSString * recordType; 
@property (nonatomic,readonly) NSString * recordName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * resourceIdentifier; 
@property (nonatomic,readonly) unsigned long long estimatedResourceSize; 
@property (nonatomic,readonly) NSSet * resourceTags; 
-(NSSet *)tags;
-(id)init;
-(NSString *)fileExtension;
-(unsigned long long)fileSize;
-(NSString *)recordType;
-(NSString *)description;
-(unsigned long long)hash;
-(TSUColor *)fallbackColor;
-(NSString *)recordName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)pixelSize;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)resourceIdentifier;
-(unsigned long long)estimatedResourceSize;
-(NSString *)digestString;
-(NSString *)locator;
-(id)initWithDigestString:(id)arg1 locator:(id)arg2 fileExtension:(id)arg3 fileSize:(unsigned long long)arg4 tags:(id)arg5 pixelSize:(CGSize)arg6 fallbackColor:(id)arg7 ;
-(BOOL)isEqualToDocumentResourceInfo:(id)arg1 ;
-(NSString *)assetFieldName;
-(long long)assetFieldType;
-(NSString *)assetFilename;
-(NSSet *)resourceTags;
@end


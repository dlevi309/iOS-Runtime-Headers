/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface BLRestoreRequestItem : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _downloadDictionary;
	NSDictionary* _assetDictionary;

}

@property (nonatomic,retain) NSDictionary * downloadDictionary;              //@synthesize downloadDictionary=_downloadDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * assetDictionary;                 //@synthesize assetDictionary=_assetDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_downloadDictionaryWithDownloadMetadata:(id)arg1 additionalDownloadPropertiesDictionary:(id)arg2 ;
+(id)_assetDictionaryWithDownloadMetadata:(id)arg1 ;
-(NSDictionary *)assetDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)downloadDictionary;
-(id)initWithDownloadDictionary:(id)arg1 assetDictionary:(id)arg2 ;
-(void)setDownloadDictionary:(NSDictionary *)arg1 ;
-(void)setAssetDictionary:(NSDictionary *)arg1 ;
-(id)initWithDownloadMetadataDictionary:(id)arg1 additionalDownloadPropertiesDictionary:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSData;

@interface QLThumbnailVersion : NSObject <NSSecureCoding> {

	NSDate* _modificationDate;
	unsigned long long _fileSize;
	NSString* _generatorID;
	NSString* _generatorVersion;
	NSData* _versionIdentifier;

}

@property (copy) NSString * generatorID;                                                       //@synthesize generatorID=_generatorID - In the implementation block
@property (copy) NSString * generatorVersion;                                                  //@synthesize generatorVersion=_generatorVersion - In the implementation block
@property (copy) NSDate * modificationDate;                                                    //@synthesize modificationDate=_modificationDate - In the implementation block
@property (copy) NSData * versionIdentifier;                                                   //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (assign) unsigned long long fileSize;                                                //@synthesize fileSize=_fileSize - In the implementation block
@property (getter=isDefaultVersion,readonly) BOOL defaultVersion; 
@property (getter=isAutomaticallyGenerated,readonly) BOOL automaticallyGenerated; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)fileSize;
-(id)dictionaryRepresentation;
-(NSDate *)modificationDate;
-(void)setFileSize:(unsigned long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSData *)versionIdentifier;
-(void)setVersionIdentifier:(NSData *)arg1 ;
-(id)initWithFileURL:(id)arg1 automaticallyGenerated:(BOOL)arg2 ;
-(id)initWithFPItem:(id)arg1 automaticallyGenerated:(BOOL)arg2 ;
-(void)setGeneratorID:(NSString *)arg1 ;
-(void)setGeneratorVersion:(NSString *)arg1 ;
-(id)initWithModificationDate:(id)arg1 fileSize:(unsigned long long)arg2 versionIdentifier:(id)arg3 generatorID:(id)arg4 generatorVersion:(id)arg5 ;
-(void)getGeneratorID:(id*)arg1 version:(id*)arg2 ;
-(id)initWithFileURL:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3 ;
-(id)initWithFPItem:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3 ;
-(NSString *)generatorID;
-(NSString *)generatorVersion;
-(BOOL)shouldBeInvalidatedByThumbnailWithVersion:(id)arg1 ;
-(BOOL)isAutomaticallyGenerated;
-(BOOL)isDefaultVersion;
@end


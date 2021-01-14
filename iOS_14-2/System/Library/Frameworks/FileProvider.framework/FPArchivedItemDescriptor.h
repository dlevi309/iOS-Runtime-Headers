/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface FPArchivedItemDescriptor : NSObject <NSSecureCoding> {

	NSString* _filePath;
	NSNumber* _fileSize;
	NSString* _typeIdentifier;

}

@property (nonatomic,copy) NSString * filePath;                    //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,copy) NSNumber * fileSize;                    //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy) NSString * typeIdentifier;              //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)filePath;
-(NSString *)typeIdentifier;
-(NSNumber *)fileSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)fileSize;
-(NSString *)typeIdentifier;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(void)setTypeIdentifier:(NSString *)arg1 ;
@end


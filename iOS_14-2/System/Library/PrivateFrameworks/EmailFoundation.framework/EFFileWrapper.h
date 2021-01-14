/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <Foundation/NSFileWrapper.h>

@class EFPathComponent;

@interface EFFileWrapper : NSFileWrapper {

	EFPathComponent* _preferredFilenamePathComponent;
	EFPathComponent* _filenamePathComponent;

}

@property (nonatomic,retain) EFPathComponent * preferredFilenamePathComponent;              //@synthesize preferredFilenamePathComponent=_preferredFilenamePathComponent - In the implementation block
@property (nonatomic,retain) EFPathComponent * filenamePathComponent;                       //@synthesize filenamePathComponent=_filenamePathComponent - In the implementation block
-(id)init;
-(id)filename;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)initDirectoryWithFileWrappers:(id)arg1 ;
-(id)initRegularFileWithContents:(id)arg1 ;
-(void)setPreferredFilenamePathComponent:(EFPathComponent *)arg1 ;
-(void)setFilenamePathComponent:(EFPathComponent *)arg1 ;
-(EFPathComponent *)preferredFilenamePathComponent;
-(EFPathComponent *)filenamePathComponent;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setFilename:(id)arg1 ;
-(id)preferredFilename;
-(void)setPreferredFilename:(id)arg1 ;
@end


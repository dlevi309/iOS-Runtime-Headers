/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/


@class NSString;

@interface MFTypeInfo : NSObject {

	unsigned _osType;
	NSString* _mimeType;
	NSString* _pathExtension;
	NSString* _filename;

}

@property (nonatomic,copy) NSString * mimeType;                   //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSString * pathExtension;              //@synthesize pathExtension=_pathExtension - In the implementation block
@property (nonatomic,copy) NSString * filename;                   //@synthesize filename=_filename - In the implementation block
@property (assign,nonatomic) unsigned osType;                     //@synthesize osType=_osType - In the implementation block
-(NSString *)pathExtension;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(unsigned)osType;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setPathExtension:(NSString *)arg1 ;
-(void)setOsType:(unsigned)arg1 ;
@end


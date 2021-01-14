/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)mimeType;
-(NSString *)filename;
-(unsigned)osType;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setOsType:(unsigned)arg1 ;
-(void)setFilename:(NSString *)arg1 ;
-(void)setPathExtension:(NSString *)arg1 ;
-(NSString *)pathExtension;
@end


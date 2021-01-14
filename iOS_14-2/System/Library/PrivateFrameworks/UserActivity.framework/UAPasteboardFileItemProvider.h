/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <libobjc.A.dylib/UAPasteboardFileItemProviding.h>

@class NSString, NSUUID, NSURL, NSData;

@interface UAPasteboardFileItemProvider : NSObject <UAPasteboardFileItemProviding> {

	BOOL _preferFileRep;
	BOOL _isDir;
	NSString* _type;
	NSUUID* _uuid;
	NSURL* _fileURL;
	NSData* _sandboxExtension;

}

@property (retain) NSURL * fileURL;                                 //@synthesize fileURL=_fileURL - In the implementation block
@property (retain) NSData * sandboxExtension;                       //@synthesize sandboxExtension=_sandboxExtension - In the implementation block
@property (assign) BOOL isDir;                                      //@synthesize isDir=_isDir - In the implementation block
@property (assign,nonatomic) BOOL preferFileRep;                    //@synthesize preferFileRep=_preferFileRep - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)conformsToProtocol:(id)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSUUID *)uuid;
-(BOOL)isDir;
-(void)setType:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(NSString *)type;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setPreferFileRep:(BOOL)arg1 ;
-(BOOL)preferFileRep;
-(id)getFileName;
-(void)getDataFileWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 sandboxExtension:(id)arg2 ;
-(void)setSandboxExtension:(NSData *)arg1 ;
-(void)accessFileAtURLWithCompletion:(/*^block*/id)arg1 ;
-(NSData *)sandboxExtension;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setIsDir:(BOOL)arg1 ;
@end


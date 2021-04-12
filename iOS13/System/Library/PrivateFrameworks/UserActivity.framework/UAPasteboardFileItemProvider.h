/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <libobjc.A.dylib/UAPasteboardFileItemProviding.h>

@class NSString, NSUUID, NSURL, NSData;

@interface UAPasteboardFileItemProvider : NSObject <UAPasteboardFileItemProviding> {

	BOOL _preferFileRep;
	NSString* _type;
	NSUUID* _uuid;
	NSURL* _fileURL;
	NSData* _sandboxExtension;

}

@property (retain) NSURL * fileURL;                                 //@synthesize fileURL=_fileURL - In the implementation block
@property (retain) NSData * sandboxExtension;                       //@synthesize sandboxExtension=_sandboxExtension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL preferFileRep;                    //@synthesize preferFileRep=_preferFileRep - In the implementation block
+(BOOL)conformsToProtocol:(id)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setPreferFileRep:(BOOL)arg1 ;
-(BOOL)preferFileRep;
-(void)getDataFileWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)getFileName;
-(id)initWithURL:(id)arg1 sandboxExtension:(id)arg2 ;
-(void)setSandboxExtension:(NSData *)arg1 ;
-(void)accessFileAtURLWithCompletion:(/*^block*/id)arg1 ;
-(NSData *)sandboxExtension;
@end


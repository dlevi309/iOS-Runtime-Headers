/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDate, NSNumber;

@interface DEAttachmentItem : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSURL* _path;
	NSDate* _modificationDate;
	NSNumber* _filesize;
	NSNumber* _shouldCompress;
	NSURL* _attachedPath;
	NSString* _attachmentType;
	NSNumber* _deleteOnAttach;
	NSString* __sandboxExtensionToken;

}

@property (nonatomic,readonly) NSString * _sandboxExtensionToken;              //@synthesize _sandboxExtensionToken=__sandboxExtensionToken - In the implementation block
@property (nonatomic,retain) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSURL * path;                                     //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                        //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSNumber * filesize;                              //@synthesize filesize=_filesize - In the implementation block
@property (nonatomic,retain) NSNumber * shouldCompress;                        //@synthesize shouldCompress=_shouldCompress - In the implementation block
@property (nonatomic,retain) NSURL * attachedPath;                             //@synthesize attachedPath=_attachedPath - In the implementation block
@property (nonatomic,copy) NSString * attachmentType;                          //@synthesize attachmentType=_attachmentType - In the implementation block
@property (nonatomic,copy) NSNumber * deleteOnAttach;                          //@synthesize deleteOnAttach=_deleteOnAttach - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)attachmentWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4 ;
+(id)attachmentWithPath:(id)arg1 ;
+(id)attachmentWithPathURL:(id)arg1 ;
-(NSDate *)modificationDate;
-(void)detach;
-(NSNumber *)shouldCompress;
-(NSURL *)attachedPath;
-(void)_generateSandboxExtensionTokenForPID:(int)arg1 ;
-(id)attachToDestinationDir:(id)arg1 ;
-(id)sandboxExtensionHandleWithErrorOut:(id*)arg1 ;
-(void)setFilesize:(NSNumber *)arg1 ;
-(void)setShouldCompress:(NSNumber *)arg1 ;
-(void)setDeleteOnAttach:(NSNumber *)arg1 ;
-(id)init;
-(NSString *)_sandboxExtensionToken;
-(id)initWithPath:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPath:(NSURL *)arg1 ;
-(NSURL *)path;
-(id)description;
-(void)setAttachmentType:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)filesize;
-(id)initWithPathURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4 ;
-(NSNumber *)deleteOnAttach;
-(void)setAttachedPath:(NSURL *)arg1 ;
-(NSString *)displayName;
-(NSString *)attachmentType;
@end


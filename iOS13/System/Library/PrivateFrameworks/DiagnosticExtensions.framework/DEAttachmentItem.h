/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,retain) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSURL * path;                           //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSNumber * filesize;                    //@synthesize filesize=_filesize - In the implementation block
@property (nonatomic,retain) NSNumber * shouldCompress;              //@synthesize shouldCompress=_shouldCompress - In the implementation block
@property (nonatomic,retain) NSURL * attachedPath;                   //@synthesize attachedPath=_attachedPath - In the implementation block
@property (nonatomic,copy) NSString * attachmentType;                //@synthesize attachmentType=_attachmentType - In the implementation block
@property (nonatomic,copy) NSNumber * deleteOnAttach;                //@synthesize deleteOnAttach=_deleteOnAttach - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)attachmentWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4 ;
+(id)attachmentWithPath:(id)arg1 ;
+(id)attachmentWithPathURL:(id)arg1 ;
-(id)description;
-(BOOL)isGroup;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setPath:(NSURL *)arg1 ;
-(NSDate *)modificationDate;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)detach;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSString *)attachmentType;
-(NSNumber *)shouldCompress;
-(void)setAttachmentType:(NSString *)arg1 ;
-(void)setShouldCompress:(NSNumber *)arg1 ;
-(NSURL *)attachedPath;
-(NSNumber *)filesize;
-(id)attachToDestinationDir:(id)arg1 ;
-(id)initWithPathURL:(id)arg1 ;
-(void)setAttachedPath:(NSURL *)arg1 ;
-(id)initWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4 ;
-(NSNumber *)deleteOnAttach;
-(void)setFilesize:(NSNumber *)arg1 ;
-(void)setDeleteOnAttach:(NSNumber *)arg1 ;
@end


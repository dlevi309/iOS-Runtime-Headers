/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class NSString, NSDate, NSNumber, NSURL;

@interface DEDAttachmentItem : NSObject <DEDSecureArchiving> {

	NSString* _deviceID;
	NSString* _displayName;
	NSDate* _modificationDate;
	NSNumber* _fileSize;
	NSURL* _attachedPath;

}

@property (retain) NSString * deviceID;                             //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSDate * modificationDate;                       //@synthesize modificationDate=_modificationDate - In the implementation block
@property (retain) NSNumber * fileSize;                             //@synthesize fileSize=_fileSize - In the implementation block
@property (retain) NSURL * attachedPath;                            //@synthesize attachedPath=_attachedPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(id)itemWithDictionary:(id)arg1 ;
+(id)itemWithDEItem:(id)arg1 ;
+(id)itemWithURL:(id)arg1 ;
-(NSString *)description;
-(NSNumber *)fileSize;
-(NSDate *)modificationDate;
-(NSString *)displayName;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(id)serialize;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(BOOL)isLocal;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSURL *)attachedPath;
-(void)setAttachedPath:(NSURL *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)modificationDate;
-(void)setDeviceID:(NSString *)arg1 ;
-(BOOL)isLocal;
-(id)serialize;
-(NSString *)deviceID;
-(NSURL *)attachedPath;
-(NSNumber *)fileSize;
-(NSString *)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setAttachedPath:(NSURL *)arg1 ;
-(NSString *)displayName;
@end


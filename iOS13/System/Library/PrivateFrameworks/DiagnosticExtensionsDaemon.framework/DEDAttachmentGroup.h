/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class DEDBugSession, NSString, NSURL, NSArray, DEDExtensionIdentifier;

@interface DEDAttachmentGroup : NSObject <DEDSecureArchiving> {

	DEDBugSession* _fromBugSession;
	NSString* _deviceID;
	NSURL* _rootURL;
	NSString* _displayName;
	NSString* _extensionID;
	NSArray* _attachmentItems;
	DEDExtensionIdentifier* _dedExtensionIdentifier;

}

@property (nonatomic,retain) DEDExtensionIdentifier * dedExtensionIdentifier;              //@synthesize dedExtensionIdentifier=_dedExtensionIdentifier - In the implementation block
@property (retain) DEDBugSession * fromBugSession;                                         //@synthesize fromBugSession=_fromBugSession - In the implementation block
@property (retain) NSString * deviceID;                                                    //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSURL * rootURL;                                                        //@synthesize rootURL=_rootURL - In the implementation block
@property (retain) NSString * displayName;                                                 //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * extensionID;                                                 //@synthesize extensionID=_extensionID - In the implementation block
@property (retain) NSArray * attachmentItems;                                              //@synthesize attachmentItems=_attachmentItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(id)groupWithDictionary:(id)arg1 ;
+(id)groupWithDEGroup:(id)arg1 identifier:(id)arg2 ;
-(NSString *)description;
-(NSString *)displayName;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(id)serialize;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)isLocal;
-(NSString *)extensionID;
-(void)setExtensionID:(NSString *)arg1 ;
-(void)setAttachmentItems:(NSArray *)arg1 ;
-(NSArray *)attachmentItems;
-(id)archiveName;
-(NSURL *)rootURL;
-(void)setRootURL:(NSURL *)arg1 ;
-(DEDExtensionIdentifier *)dedExtensionIdentifier;
-(id)totalFilesize;
-(DEDBugSession *)fromBugSession;
-(void)setFromBugSession:(DEDBugSession *)arg1 ;
-(void)setDedExtensionIdentifier:(DEDExtensionIdentifier *)arg1 ;
@end


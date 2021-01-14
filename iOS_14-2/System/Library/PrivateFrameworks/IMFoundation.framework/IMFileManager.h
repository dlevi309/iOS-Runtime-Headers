/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <Foundation/NSFileManager.h>

@interface IMFileManager : NSFileManager
+(id)defaultHFSFileManager;
+(id)defaultManager;
-(id)MIMETypeOfPathExtension:(id)arg1 ;
-(id)displayNameOfFileWithName:(id)arg1 hfsFlags:(unsigned short)arg2 ;
-(id)pathExtensionForMIMEType:(id)arg1 ;
-(id)UTITypeOfMimeType:(id)arg1 ;
-(id)MIMETypeOfPath:(id)arg1 ;
-(id)pathExtensionForUTIType:(id)arg1 ;
-(id)UTITypeOfPath:(id)arg1 ;
-(id)UTITypeOfPathExtension:(id)arg1 ;
@end


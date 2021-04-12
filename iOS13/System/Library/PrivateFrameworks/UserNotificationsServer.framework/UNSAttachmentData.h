/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <UserNotificationsServer/UserNotificationsServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/UNSAttachmentDataProvider.h>

@class NSURL, NSString;

@interface UNSAttachmentData : NSObject <NSCopying, UNSAttachmentDataProvider> {

	NSURL* _fileURL;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isFileValid:(id)arg1 ;
+(BOOL)isFileAtURL:(id)arg1 validForFamily:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)dataForFamily:(unsigned long long)arg1 fromFileURL:(id)arg2 error:(id*)arg3 ;
+(Class)dataClassForFamily:(unsigned long long)arg1 ;
+(id)dataFromFileURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
@end


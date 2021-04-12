/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>

@class NSURL, NSString, NSNumber;

@interface EKAttachment : EKObject

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * localRelativePath; 
@property (nonatomic,readonly) NSURL * localURL; 
@property (nonatomic,readonly) BOOL isBinary; 
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSString * fileFormat; 
@property (nonatomic,readonly) NSNumber * fileSize; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSURL * URLForPendingFileCopy; 
+(id)createTempDestinationURLWithExtension:(id)arg1 ;
+(Class)frozenClass;
+(id)_copyFileAtURLToTemporaryDirectory:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)fileSize;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSURL *)localURL;
-(NSString *)fileName;
-(NSString *)fileFormat;
-(id)initWithFilepath:(id)arg1 ;
-(long long)compareFileNames:(id)arg1 ;
-(NSURL *)URLForPendingFileCopy;
-(void)setFileFormat:(NSString *)arg1 ;
-(id)semanticIdentifier;
-(BOOL)isBinary;
-(void)setIsBinary:(BOOL)arg1 ;
-(NSString *)localRelativePath;
-(void)setLocalRelativePath:(NSString *)arg1 ;
-(id)XPropertiesData;
-(void)setXPropertiesData:(id)arg1 ;
-(id)externalId;
-(void)setExternalId:(id)arg1 ;
-(void)setURLForPendingFileCopy:(NSURL *)arg1 ;
-(void)setFileNameRaw:(id)arg1 ;
-(id)fileNameRaw;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)knownIdentityKeysForComparison;
+(id)createTempDestinationURLWithExtension:(id)arg1 ;
+(id)_copyFileAtURLToTemporaryDirectory:(id)arg1 ;
+(id)knownSingleValueKeysForComparison;
+(Class)frozenClass;
-(NSString *)UUID;
-(id)semanticIdentifier;
-(void)setExternalID:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSNumber *)fileSize;
-(id)externalID;
-(NSURL *)localURL;
-(NSString *)fileName;
-(id)initWithFilepath:(id)arg1 ;
-(long long)compareFileNames:(id)arg1 ;
-(id)description;
-(BOOL)isBinary;
-(NSURL *)URL;
-(void)setFileNameRaw:(id)arg1 ;
-(void)setFileFormat:(NSString *)arg1 ;
-(id)fileNameRaw;
-(void)setIsBinary:(BOOL)arg1 ;
-(NSString *)localRelativePath;
-(id)XPropertiesData;
-(void)setLocalRelativePath:(NSString *)arg1 ;
-(void)setXPropertiesData:(id)arg1 ;
-(NSURL *)URLForPendingFileCopy;
-(void)setURLForPendingFileCopy:(NSURL *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSString *)fileFormat;
-(void)setUUID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


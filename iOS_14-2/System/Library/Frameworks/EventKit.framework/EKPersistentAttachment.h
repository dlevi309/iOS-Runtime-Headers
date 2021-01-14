/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentAttachment : EKPersistentObject
+(id)relations;
+(Class)meltedClass;
-(int)entityType;
-(id)UUID;
-(id)semanticIdentifier;
-(void)setExternalID:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)fileSize;
-(id)externalID;
-(id)description;
-(BOOL)isBinary;
-(id)URL;
-(void)setFileNameRaw:(id)arg1 ;
-(void)setFileFormat:(id)arg1 ;
-(id)fileNameRaw;
-(void)setIsBinary:(BOOL)arg1 ;
-(id)localRelativePath;
-(id)XPropertiesData;
-(void)setLocalRelativePath:(id)arg1 ;
-(void)setXPropertiesData:(id)arg1 ;
-(id)URLForPendingFileCopy;
-(void)setURLForPendingFileCopy:(id)arg1 ;
-(void)setFileSize:(id)arg1 ;
-(id)fileFormat;
-(void)setUUID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


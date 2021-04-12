/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


@class NSFileManager;

@interface IMDDonationManager : NSObject {

	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
+(id)sharedInstance;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)copyGroupPhotoToExternalPathIfNecessary:(id)arg1 chatGUID:(id)arg2 attachmentFilepath:(id)arg3 ;
@end


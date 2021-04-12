/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString;

@interface PLCloudStreamShareJob : PLCloudSharingJob {

	NSArray* _mediaSources;
	NSString* _albumCloudGUID;
	NSString* _albumName;
	NSString* _commentText;
	NSArray* _recipientsInfo;

}

@property (nonatomic,retain) NSArray * mediaSources;                 //@synthesize mediaSources=_mediaSources - In the implementation block
@property (nonatomic,retain) NSString * albumCloudGUID;              //@synthesize albumCloudGUID=_albumCloudGUID - In the implementation block
@property (nonatomic,retain) NSString * albumName;                   //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,retain) NSString * commentText;                 //@synthesize commentText=_commentText - In the implementation block
@property (nonatomic,retain) NSArray * recipientsInfo;               //@synthesize recipientsInfo=_recipientsInfo - In the implementation block
+(void)publishMediaFromSources:(id)arg1 toSharedAlbum:(id)arg2 withCommentText:(id)arg3 ;
+(void)publishMediaFromSources:(id)arg1 toNewSharedAlbumWithName:(id)arg2 withCommentText:(id)arg3 recipients:(id)arg4 ;
-(void)run;
-(id)description;
-(void)runDaemonSide;
-(void)addInfosForRecipients:(id)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(BOOL)shouldArchiveXPCToDisk;
-(void)executeDaemonOperation;
-(NSArray *)mediaSources;
-(void)setMediaSources:(NSArray *)arg1 ;
-(NSString *)albumCloudGUID;
-(void)setAlbumCloudGUID:(NSString *)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)commentText;
-(void)setCommentText:(NSString *)arg1 ;
-(NSArray *)recipientsInfo;
-(void)setRecipientsInfo:(NSArray *)arg1 ;
@end


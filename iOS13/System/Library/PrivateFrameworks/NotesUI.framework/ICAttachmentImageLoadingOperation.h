/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <Foundation/NSOperation.h>

@class NSString, NSCache, NSManagedObjectID, NSURL, NSMutableArray;

@interface ICAttachmentImageLoadingOperation : NSOperation {

	BOOL _forceFullSizeImage;
	short _attachmentType;
	NSString* _cacheKey;
	NSCache* _cache;
	NSManagedObjectID* _attachmentObjectID;
	NSURL* _mediaURL;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,retain) NSCache * cache;                                     //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * attachmentObjectID;              //@synthesize attachmentObjectID=_attachmentObjectID - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                    //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,copy) NSString * cacheKey;                                   //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) short attachmentType;                                //@synthesize attachmentType=_attachmentType - In the implementation block
@property (assign,nonatomic) BOOL forceFullSizeImage;                             //@synthesize forceFullSizeImage=_forceFullSizeImage - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;                 //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(void)main;
-(NSString *)cacheKey;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)setCache:(NSCache *)arg1 ;
-(NSCache *)cache;
-(/*^block*/id)addCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(NSURL *)mediaURL;
-(void)setMediaURL:(NSURL *)arg1 ;
-(short)attachmentType;
-(void)setAttachmentType:(short)arg1 ;
-(void)setAttachmentObjectID:(NSManagedObjectID *)arg1 ;
-(void)setForceFullSizeImage:(BOOL)arg1 ;
-(BOOL)forceFullSizeImage;
-(NSManagedObjectID *)attachmentObjectID;
-(id)initWithCache:(id)arg1 attachment:(id)arg2 attachmentType:(short)arg3 forceFullSizeImage:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)removeCompletionHandler:(/*^block*/id)arg1 cancelIfNoneLeft:(BOOL)arg2 ;
@end


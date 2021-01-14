/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol OS_dispatch_queue;
@class SSDownload, NSObject, NSString, NSNumber, NSURL;

@interface ISUDownload : NSObject {

	SSDownload* _download;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) SSDownload * managedDownload; 
@property (nonatomic,readonly) NSString * artistName; 
@property (getter=isContentRestricted,nonatomic,readonly) BOOL contentRestricted; 
@property (nonatomic,readonly) NSString * phaseIdentifier; 
@property (nonatomic,readonly) NSNumber * storeItemIdentifier; 
@property (nonatomic,readonly) NSNumber * storePreorderIdentifier; 
@property (nonatomic,readonly) NSURL * thumbnailImageURL; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) long long bytesDownloaded; 
@property (nonatomic,readonly) long long bytesTotal; 
@property (nonatomic,readonly) double estimatedSecondsRemaining; 
@property (getter=isPurchase,nonatomic,readonly) BOOL purchase; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) NSString * statusDescription; 
@property (getter=isPausable,nonatomic,readonly) BOOL pausable; 
+(void)initialize;
+(id)downloadProperties;
+(id)downloadExternalProperties;
-(BOOL)isPausable;
-(long long)bytesTotal;
-(long long)bytesDownloaded;
-(double)estimatedSecondsRemaining;
-(NSURL *)thumbnailImageURL;
-(NSString *)artistName;
-(BOOL)isContentRestricted;
-(NSNumber *)storePreorderIdentifier;
-(NSString *)phaseIdentifier;
-(NSNumber *)storeItemIdentifier;
-(double)percentComplete;
-(BOOL)isPurchase;
-(NSString *)statusDescription;
-(NSString *)title;
-(void)dealloc;
-(id)initWithManagedDownload:(id)arg1 ;
-(id)copyLocalizedStatusString;
-(SSDownload *)managedDownload;
-(void)resetPreorderState;
-(void)setManagedDownload:(SSDownload *)arg1 ;
@end


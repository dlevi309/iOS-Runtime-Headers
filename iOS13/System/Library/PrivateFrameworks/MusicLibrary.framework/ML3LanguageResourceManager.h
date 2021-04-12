/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@protocol OS_dispatch_queue;
@class ML3LanguageResources, NSObject;

@interface ML3LanguageResourceManager : NSObject {

	ML3LanguageResources* _cachedResources;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) ML3LanguageResources * cachedResources;                //@synthesize cachedResources=_cachedResources - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) ML3LanguageResources * resources; 
+(id)sharedResourceManager;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(ML3LanguageResources *)resources;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidateCachedResources;
-(id)_buildLanguageResources;
-(ML3LanguageResources *)cachedResources;
-(void)setCachedResources:(ML3LanguageResources *)arg1 ;
@end


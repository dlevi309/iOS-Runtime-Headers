/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(ML3LanguageResources *)resources;
-(void)setCachedResources:(ML3LanguageResources *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_buildLanguageResources;
-(id)_init;
-(void)invalidateCachedResources;
-(ML3LanguageResources *)cachedResources;
@end


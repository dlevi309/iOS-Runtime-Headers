/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <libobjc.A.dylib/IMCache.h>

@class NSString;

@interface IMBaseDiskCache : NSObject <IMCache> {

	NSString* _basePath;

}

@property (nonatomic,retain) NSString * basePath;                   //@synthesize basePath=_basePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)initialize;
-(void)clearCache;
-(BOOL)isEmpty;
-(void)removeItemForKey:(id)arg1 ;
-(id)initWithBasePath:(id)arg1 ;
-(NSString *)basePath;
-(id)pathForKey:(id)arg1 ;
-(void)setBasePath:(NSString *)arg1 ;
-(void)removeItemsWithPrefx:(id)arg1 ;
-(BOOL)hasItemForKey:(id)arg1 ;
-(id)_allFiles;
@end


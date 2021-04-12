/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
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
-(NSString *)basePath;
-(void)initialize;
-(id)init;
-(void)clearCache;
-(id)initWithBasePath:(id)arg1 ;
-(BOOL)isEmpty;
-(void)setBasePath:(NSString *)arg1 ;
-(id)_allFiles;
-(id)pathForKey:(id)arg1 ;
-(void)removeItemsWithPrefx:(id)arg1 ;
-(void)removeItemForKey:(id)arg1 ;
-(BOOL)hasItemForKey:(id)arg1 ;
@end


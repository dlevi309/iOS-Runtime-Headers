/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class PSWeakReference, NSString, NSArray;

@interface PSUsageBundleApp : NSObject {

	PSWeakReference* _storageReporterReference;
	BOOL _deletionRestricted;
	float _totalSize;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSArray* _categories;

}

@property (assign,nonatomic,__weak) id<PSStorageReporting> usageBundleStorageReporter; 
@property (nonatomic,retain) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * categories;                                                  //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) float totalSize;                                                       //@synthesize totalSize=_totalSize - In the implementation block
@property (assign,getter=isDeletionRestricted,nonatomic) BOOL deletionRestricted;                   //@synthesize deletionRestricted=_deletionRestricted - In the implementation block
+(id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 andCategories:(id)arg3 ;
+(id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSArray *)categories;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(float)totalSize;
-(void)setName:(NSString *)arg1 ;
-(void)setUsageBundleStorageReporter:(id<PSStorageReporting>)arg1 ;
-(id<PSStorageReporting>)usageBundleStorageReporter;
-(void)setDeletionRestricted:(BOOL)arg1 ;
-(void)setTotalSize:(float)arg1 ;
-(BOOL)isDeletionRestricted;
@end


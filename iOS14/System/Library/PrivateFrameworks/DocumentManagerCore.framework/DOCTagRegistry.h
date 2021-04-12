/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/

#import <libobjc.A.dylib/DOCTagRegistryDelegate.h>

@class NSOrderedSet, NSMutableOrderedSet, DOCTagRegistryICloudDataSource, NSString;

@interface DOCTagRegistry : NSObject <DOCTagRegistryDelegate> {

	int _localStorageDidUpdateNotifyToken;
	BOOL _inBatchUpdate;
	BOOL _shouldSynchronizeAfterBatchUpdate;
	long long _tagSerialNumber;
	NSMutableOrderedSet* _userTags;
	NSMutableOrderedSet* _discoveredTags;
	DOCTagRegistryICloudDataSource* _iCloudDataSource;

}

@property (nonatomic,retain) NSMutableOrderedSet * userTags;                                 //@synthesize userTags=_userTags - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * discoveredTags;                           //@synthesize discoveredTags=_discoveredTags - In the implementation block
@property (assign,nonatomic) BOOL shouldSynchronizeAfterBatchUpdate;                         //@synthesize shouldSynchronizeAfterBatchUpdate=_shouldSynchronizeAfterBatchUpdate - In the implementation block
@property (nonatomic,retain) DOCTagRegistryICloudDataSource * iCloudDataSource;              //@synthesize iCloudDataSource=_iCloudDataSource - In the implementation block
@property (assign,nonatomic) BOOL inBatchUpdate;                                             //@synthesize inBatchUpdate=_inBatchUpdate - In the implementation block
@property (assign,nonatomic) long long tagSerialNumber;                                      //@synthesize tagSerialNumber=_tagSerialNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sanitizedTagName:(id)arg1 ;
-(BOOL)addTag:(id)arg1 ;
-(id)init;
-(void)synchronize;
-(void)setUserTags:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)userTags;
-(void)dealloc;
-(NSMutableOrderedSet *)discoveredTags;
-(long long)tagSerialNumber;
-(id)_setForTagType:(long long)arg1 ;
-(BOOL)inBatchUpdate;
-(void)setInBatchUpdate:(BOOL)arg1 ;
-(void)addTag:(id)arg1 options:(long long)arg2 ;
-(BOOL)isValidNewTagName:(id)arg1 ;
-(id)_tagNameForComparing:(id)arg1 ;
-(BOOL)_canAddTag:(id)arg1 ;
-(id)_memberTag:(id)arg1 ;
-(BOOL)canReplaceTag:(id)arg1 withTag:(id)arg2 ;
-(void)setTagSerialNumber:(long long)arg1 ;
-(void)setDiscoveredTags:(NSMutableOrderedSet *)arg1 ;
-(void)setICloudDataSource:(DOCTagRegistryICloudDataSource *)arg1 ;
-(void)addTags:(id)arg1 options:(long long)arg2 ;
-(BOOL)insertTag:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeTags:(id)arg1 ;
-(void)removeAllTagsOfType:(long long)arg1 ;
-(BOOL)replaceTag:(id)arg1 withTag:(id)arg2 ;
-(BOOL)moveTag:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(id)tagForName:(id)arg1 ;
-(BOOL)shouldSynchronizeAfterBatchUpdate;
-(void)setShouldSynchronizeAfterBatchUpdate:(BOOL)arg1 ;
-(DOCTagRegistryICloudDataSource *)iCloudDataSource;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


#import <CoreDuet/CoreDuet-Structs.h>
@class NSArray, NSMutableArray;

@interface _CDSiriLearningSettings : NSObject {

	BOOL _hasPrefsAccess;
	int _notifyToken;
	os_unfair_lock_s _lock;
	NSArray* _allLearningDisabledBundleIDs;
	NSMutableArray* _delegates;

}

@property (nonatomic,readonly) NSArray * allLearningDisabledBundleIDs; 
+(id)sharedInstance;
-(void)startSanitizingKnowledgeStore:(id)arg1 ;
-(void)stopSanitizing;
-(void)startSanitizingInteractionStore:(id)arg1 ;
-(NSArray *)allLearningDisabledBundleIDs;
-(BOOL)isLearningDisabledForBundleID:(id)arg1 ;
@end


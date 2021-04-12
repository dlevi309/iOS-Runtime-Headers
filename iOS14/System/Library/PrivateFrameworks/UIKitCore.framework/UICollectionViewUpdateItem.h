/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath, NSUUID;

@interface UICollectionViewUpdateItem : NSObject <NSCopying> {

	NSIndexPath* _initialIndexPath;
	NSIndexPath* _finalIndexPath;
	long long _updateAction;
	BOOL _isAppendingSectionInsert;
	NSUUID* _identifier;

}

@property (getter=_action,nonatomic,readonly) long long action; 
@property (getter=_indexPath,nonatomic,readonly) NSIndexPath * indexPath; 
@property (nonatomic,retain) NSUUID * identifier;                                                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL isAppendingSectionInsert;                                                         //@synthesize isAppendingSectionInsert=_isAppendingSectionInsert - In the implementation block
@property (getter=_isSectionOperation,nonatomic,readonly) BOOL isSectionOperation; 
@property (setter=_setNewIndexPath:,getter=_newIndexPath,nonatomic,retain) NSIndexPath * newIndexPath; 
@property (nonatomic,readonly) NSIndexPath * indexPathBeforeUpdate;                                                 //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathAfterUpdate;                                                  //@synthesize finalIndexPath=_finalIndexPath - In the implementation block
@property (nonatomic,readonly) long long updateAction;                                                              //@synthesize updateAction=_updateAction - In the implementation block
-(long long)_action;
-(void)setIsAppendingSectionInsert:(BOOL)arg1 ;
-(NSIndexPath *)indexPathBeforeUpdate;
-(BOOL)isNOOP;
-(id)initWithAction:(long long)arg1 forIndexPath:(id)arg2 ;
-(BOOL)_isSectionOperation;
-(id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2 ;
-(long long)inverseCompareIndexPaths:(id)arg1 ;
-(id)description;
-(BOOL)isAppendingSectionInsert;
-(id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3 ;
-(long long)updateAction;
-(BOOL)isEqualToUpdate:(id)arg1 ;
-(void)_setNewIndexPath:(id)arg1 ;
-(long long)compareIndexPaths:(id)arg1 ;
-(id)_newIndexPath;
-(id)_indexPath;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(id)revertedUpdate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSIndexPath *)indexPathAfterUpdate;
-(BOOL)isRevertedUpdateOf:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


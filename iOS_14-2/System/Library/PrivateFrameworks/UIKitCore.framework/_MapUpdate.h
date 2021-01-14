/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSIndexPath;

@interface _MapUpdate : NSObject {

	BOOL _isSectionUpdate;
	BOOL _isInsert;
	BOOL _isDelete;
	BOOL _isMove;
	NSIndexPath* _indexPath;
	NSIndexPath* _moveFromIndexPath;
	NSIndexPath* _moveToIndexPath;
	long long _index;
	long long _section;
	long long _moveFromSection;
	long long _moveToSection;
	NSRange _insertRange;
	NSRange _deleteRange;
	NSRange _moveFromRange;
	NSRange _moveToRange;

}

@property (assign,nonatomic) BOOL isSectionUpdate;                         //@synthesize isSectionUpdate=_isSectionUpdate - In the implementation block
@property (assign,nonatomic) BOOL isInsert;                                //@synthesize isInsert=_isInsert - In the implementation block
@property (assign,nonatomic) BOOL isDelete;                                //@synthesize isDelete=_isDelete - In the implementation block
@property (assign,nonatomic) BOOL isMove;                                  //@synthesize isMove=_isMove - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                      //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * moveFromIndexPath;              //@synthesize moveFromIndexPath=_moveFromIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * moveToIndexPath;                //@synthesize moveToIndexPath=_moveToIndexPath - In the implementation block
@property (assign,nonatomic) long long index;                              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) long long section;                            //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) NSRange insertRange;                          //@synthesize insertRange=_insertRange - In the implementation block
@property (assign,nonatomic) NSRange deleteRange;                          //@synthesize deleteRange=_deleteRange - In the implementation block
@property (assign,nonatomic) long long moveFromSection;                    //@synthesize moveFromSection=_moveFromSection - In the implementation block
@property (assign,nonatomic) long long moveToSection;                      //@synthesize moveToSection=_moveToSection - In the implementation block
@property (assign,nonatomic) NSRange moveFromRange;                        //@synthesize moveFromRange=_moveFromRange - In the implementation block
@property (assign,nonatomic) NSRange moveToRange;                          //@synthesize moveToRange=_moveToRange - In the implementation block
+(id)itemMoveFromIndexIndexPath:(id)arg1 toIndexPath:(id)arg2 fromIndex:(long long)arg3 toIndex:(long long)arg4 ;
+(id)itemMoveSection:(long long)arg1 toSection:(long long)arg2 fromRange:(NSRange)arg3 toRange:(NSRange)arg4 ;
+(id)itemDeleteSection:(long long)arg1 deleteRange:(NSRange)arg2 ;
+(id)itemDeleteItemAtIndexPath:(id)arg1 index:(long long)arg2 ;
+(id)itemInsertSection:(long long)arg1 insertRange:(NSRange)arg2 ;
+(id)itemInsertItemAtIndexPath:(id)arg1 index:(long long)arg2 ;
-(long long)index;
-(void)setSection:(long long)arg1 ;
-(BOOL)isMove;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setIndex:(long long)arg1 ;
-(long long)section;
-(id)description;
-(BOOL)isDelete;
-(void)setIsMove:(BOOL)arg1 ;
-(NSRange)insertRange;
-(NSRange)deleteRange;
-(NSRange)moveToRange;
-(void)setIsInsert:(BOOL)arg1 ;
-(void)setIsDelete:(BOOL)arg1 ;
-(long long)moveToSection;
-(NSRange)moveFromRange;
-(BOOL)isSectionUpdate;
-(long long)moveFromSection;
-(NSIndexPath *)moveToIndexPath;
-(void)setInsertRange:(NSRange)arg1 ;
-(void)setDeleteRange:(NSRange)arg1 ;
-(void)setMoveToRange:(NSRange)arg1 ;
-(id)reverseUpdateItem;
-(void)setIsSectionUpdate:(BOOL)arg1 ;
-(void)setMoveFromSection:(long long)arg1 ;
-(void)setMoveFromIndexPath:(NSIndexPath *)arg1 ;
-(void)setMoveToIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)moveFromIndexPath;
-(void)setMoveToSection:(long long)arg1 ;
-(void)setMoveFromRange:(NSRange)arg1 ;
-(BOOL)isInsert;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKGroupDelegate;
@class PKCatalogGroup, NSMutableDictionary, NSNumber;

@interface PKGroup : NSObject {

	PKCatalogGroup* _catalogGroup;
	NSMutableDictionary* _passesByUniqueID;
	BOOL _local;
	id<PKGroupDelegate> _delegate;
	unsigned long long _frontmostPassIndex;

}

@property (assign,getter=isLocal,nonatomic) BOOL local;                          //@synthesize local=_local - In the implementation block
@property (assign,nonatomic,__weak) id<PKGroupDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long frontmostPassIndex;              //@synthesize frontmostPassIndex=_frontmostPassIndex - In the implementation block
@property (nonatomic,readonly) NSNumber * groupID; 
-(id)description;
-(id<PKGroupDelegate>)delegate;
-(void)setDelegate:(id<PKGroupDelegate>)arg1 ;
-(unsigned long long)passCount;
-(NSNumber *)groupID;
-(BOOL)isLocal;
-(void)setLocal:(BOOL)arg1 ;
-(id)passWithUniqueID:(id)arg1 ;
-(id)passes;
-(void)_updatePass:(id)arg1 notify:(BOOL)arg2 ;
-(void)_moveUniqueID:(id)arg1 toIndex:(unsigned long long)arg2 notify:(BOOL)arg3 ;
-(void)_insertPass:(id)arg1 atIndex:(unsigned long long)arg2 notify:(BOOL)arg3 ;
-(void)_removeUniqueID:(id)arg1 notify:(BOOL)arg2 ;
-(unsigned long long)_indexOfUniqueID:(id)arg1 ;
-(id)passAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForPassUniqueID:(id)arg1 ;
-(id)initWithCatalogGroup:(id)arg1 passes:(id)arg2 ;
-(void)updateWithCatalogGroup:(id)arg1 passes:(id)arg2 notify:(BOOL)arg3 ;
-(id)copyCatalogGroup;
-(void)handleUserPassDelete:(id)arg1 ;
-(BOOL)containsPasses;
-(BOOL)containsOnlyUniqueID:(id)arg1 ;
-(void)enumerateUniqueIDsWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)frontmostPassIndex;
-(void)setFrontmostPassIndex:(unsigned long long)arg1 ;
@end


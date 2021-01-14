/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isLocal;
-(unsigned long long)passCount;
-(id<PKGroupDelegate>)delegate;
-(void)_moveUniqueID:(id)arg1 toIndex:(unsigned long long)arg2 notify:(BOOL)arg3 ;
-(void)_updatePass:(id)arg1 notify:(BOOL)arg2 ;
-(NSNumber *)groupID;
-(void)_insertPass:(id)arg1 atIndex:(unsigned long long)arg2 notify:(BOOL)arg3 ;
-(void)_removeUniqueID:(id)arg1 notify:(BOOL)arg2 ;
-(unsigned long long)_indexOfUniqueID:(id)arg1 ;
-(void)movePass:(id)arg1 toIndex:(unsigned long long)arg2 ;
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
-(void)setDelegate:(id<PKGroupDelegate>)arg1 ;
-(id)description;
-(id)passes;
-(void)setLocal:(BOOL)arg1 ;
-(id)passAtIndex:(unsigned long long)arg1 ;
-(id)passWithUniqueID:(id)arg1 ;
@end


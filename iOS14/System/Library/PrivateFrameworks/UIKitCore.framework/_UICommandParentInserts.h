/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary, NSMutableArray, NSArray, NSDictionary;

@interface _UICommandParentInserts : NSObject {

	NSMutableDictionary* _childInserts;
	NSMutableArray* _fallbackBeforeElements;
	NSMutableArray* _fallbackAfterElements;
	NSArray* _atStartElements;
	NSArray* _atEndElements;

}

@property (nonatomic,readonly) NSArray * atStartElements;                     //@synthesize atStartElements=_atStartElements - In the implementation block
@property (nonatomic,readonly) NSArray * atEndElements;                       //@synthesize atEndElements=_atEndElements - In the implementation block
@property (nonatomic,readonly) NSDictionary * childInserts;                   //@synthesize childInserts=_childInserts - In the implementation block
@property (nonatomic,readonly) NSArray * fallbackBeforeElements;              //@synthesize fallbackBeforeElements=_fallbackBeforeElements - In the implementation block
@property (nonatomic,readonly) NSArray * fallbackAfterElements;               //@synthesize fallbackAfterElements=_fallbackAfterElements - In the implementation block
-(NSDictionary *)childInserts;
-(NSArray *)atEndElements;
-(void)_setAtStartElements:(id)arg1 atEndElements:(id)arg2 ;
-(NSArray *)fallbackBeforeElements;
-(void)_setBeforeElements:(id)arg1 afterElements:(id)arg2 aroundElement:(id)arg3 ;
-(void)_addFallbackBeforeElements:(id)arg1 fallbackAfterElements:(id)arg2 ;
-(NSArray *)atStartElements;
-(NSArray *)fallbackAfterElements;
@end


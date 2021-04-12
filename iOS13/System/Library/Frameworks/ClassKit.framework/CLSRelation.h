/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/


@class NSString;

@interface CLSRelation : NSObject {

	BOOL _faultable;
	Class _fromEntity;
	NSString* _fromKey;
	Class _toEntity;
	NSString* _toKey;

}

@property (nonatomic,readonly) Class fromEntity;                               //@synthesize fromEntity=_fromEntity - In the implementation block
@property (nonatomic,readonly) NSString * fromKey;                             //@synthesize fromKey=_fromKey - In the implementation block
@property (nonatomic,readonly) Class toEntity;                                 //@synthesize toEntity=_toEntity - In the implementation block
@property (nonatomic,readonly) NSString * toKey;                               //@synthesize toKey=_toKey - In the implementation block
@property (getter=isFaultable,nonatomic,readonly) BOOL faultable;              //@synthesize faultable=_faultable - In the implementation block
-(id)description;
-(id)initWithFromEntity:(Class)arg1 toEntity:(Class)arg2 onFromKey:(id)arg3 toKey:(id)arg4 faultable:(BOOL)arg5 ;
-(NSString *)fromKey;
-(Class)toEntity;
-(BOOL)isInverseOfRelation:(id)arg1 ;
-(BOOL)isEquivalentToRelation:(id)arg1 ;
-(NSString *)toKey;
-(BOOL)isFaultable;
-(Class)fromEntity;
@end


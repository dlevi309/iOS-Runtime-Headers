/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)toKey;
-(id)description;
-(NSString *)fromKey;
-(Class)toEntity;
-(id)initWithFromEntity:(Class)arg1 toEntity:(Class)arg2 onFromKey:(id)arg3 toKey:(id)arg4 faultable:(BOOL)arg5 ;
-(BOOL)isInverseOfRelation:(id)arg1 ;
-(BOOL)isEquivalentToRelation:(id)arg1 ;
-(BOOL)isFaultable;
-(Class)fromEntity;
@end


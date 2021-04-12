/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSString, SXComponentDependencyDescriptor;

@interface SXComponentDependency : NSObject {

	NSString* _fromComponentIdentifier;
	NSString* _toComponentIdentifier;
	long long _fromDependencyAttribute;
	long long _toDependencyAttribute;
	SXComponentDependencyDescriptor* _descriptor;

}

@property (nonatomic,retain) NSString * fromComponentIdentifier;                        //@synthesize fromComponentIdentifier=_fromComponentIdentifier - In the implementation block
@property (nonatomic,retain) NSString * toComponentIdentifier;                          //@synthesize toComponentIdentifier=_toComponentIdentifier - In the implementation block
@property (assign,nonatomic) long long fromDependencyAttribute;                         //@synthesize fromDependencyAttribute=_fromDependencyAttribute - In the implementation block
@property (assign,nonatomic) long long toDependencyAttribute;                           //@synthesize toDependencyAttribute=_toDependencyAttribute - In the implementation block
@property (nonatomic,retain) SXComponentDependencyDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
+(id)componentDependencyFromComponentIdentifier:(id)arg1 toComponentIdentifier:(id)arg2 fromLayoutAttribute:(long long)arg3 toAttribute:(long long)arg4 withDescriptor:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SXComponentDependencyDescriptor *)descriptor;
-(void)setDescriptor:(SXComponentDependencyDescriptor *)arg1 ;
-(NSString *)toComponentIdentifier;
-(id)initWithComponentDependencyFromComponentIdentifier:(id)arg1 toComponentIdentifier:(id)arg2 fromLayoutAttribute:(long long)arg3 toAttribute:(long long)arg4 withDescriptor:(id)arg5 ;
-(NSString *)fromComponentIdentifier;
-(long long)fromDependencyAttribute;
-(long long)toDependencyAttribute;
-(void)setFromComponentIdentifier:(NSString *)arg1 ;
-(void)setToComponentIdentifier:(NSString *)arg1 ;
-(void)setFromDependencyAttribute:(long long)arg1 ;
-(void)setToDependencyAttribute:(long long)arg1 ;
@end


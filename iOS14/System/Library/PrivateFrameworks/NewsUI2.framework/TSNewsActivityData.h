/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@class NSString, NSArray;

@interface TSNewsActivityData : NSObject {

	 activity;
	 identifier;
	 object;
	 traits;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) long long activity; 
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) id object; 
@property (readonly,nonatomic) NSArray * traits; 
+(long long)convertToArticleTraitWithTrait:(long long)arg1 ;
-(NSString *)description;
-(NSArray *)traits;
-(id)init;
-(long long)activity;
-(id)object;
-(NSString *)identifier;
-(id)initWithActivity:(long long)arg1 identifier:(id)arg2 object:(id)arg3 traits:(id)arg4 ;
-(id)initWithActivity:(long long)arg1 identifier:(id)arg2 ;
-(id)initWithActivity:(long long)arg1 identifier:(id)arg2 object:(id)arg3 ;
@end


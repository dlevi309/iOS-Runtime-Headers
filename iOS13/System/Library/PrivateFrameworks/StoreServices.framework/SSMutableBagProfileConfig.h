/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSBagProfileConfig.h>

@class NSMutableDictionary, NSString;

@interface SSMutableBagProfileConfig : SSBagProfileConfig {

	NSMutableDictionary* _mutableBagKeysDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * mutableBagKeysDictionary;              //@synthesize mutableBagKeysDictionary=_mutableBagKeysDictionary - In the implementation block
@property (assign,nonatomic) double bagLoadTimeout; 
@property (nonatomic,copy) NSString * profile; 
@property (nonatomic,copy) NSString * profileVersion; 
-(id)init;
-(id)bagKeysDictionary;
-(NSMutableDictionary *)mutableBagKeysDictionary;
-(void)registerBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(void)registerBagKey:(id)arg1 valueType:(unsigned long long)arg2 ;
-(void)setMutableBagKeysDictionary:(NSMutableDictionary *)arg1 ;
@end


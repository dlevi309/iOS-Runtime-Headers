/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <libobjc.A.dylib/TPSValidatable.h>

@class NSString, NSDictionary;

@interface TPSTargetingValidation : NSObject <TPSValidatable> {

	BOOL _ignoreCache;
	NSString* _identifier;
	NSString* _name;
	NSDictionary* _targetContext;
	unsigned long long _joinType;

}

@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * targetContext;               //@synthesize targetContext=_targetContext - In the implementation block
@property (assign,nonatomic) unsigned long long joinType;              //@synthesize joinType=_joinType - In the implementation block
@property (assign,nonatomic) BOOL ignoreCache;                         //@synthesize ignoreCache=_ignoreCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)integerValue;
-(BOOL)boolValue;
-(id)arrayValue;
-(BOOL)ignoreCache;
-(id)stringValue;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)joinType;
-(id)key;
-(void)setJoinType:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)cancel;
-(id)value;
-(void)setIgnoreCache:(BOOL)arg1 ;
-(NSDictionary *)targetContext;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithTargetContext:(id)arg1 ;
-(void)setTargetContext:(NSDictionary *)arg1 ;
@end


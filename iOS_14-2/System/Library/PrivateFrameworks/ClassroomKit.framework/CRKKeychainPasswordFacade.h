/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSDictionary;

@interface CRKKeychainPasswordFacade : NSObject {

	NSDictionary* _baseQueryAttributes;

}

@property (nonatomic,copy,readonly) NSDictionary * baseQueryAttributes;              //@synthesize baseQueryAttributes=_baseQueryAttributes - In the implementation block
-(void)setPassword:(id)arg1 forService:(id)arg2 accessGroup:(id)arg3 ;
-(id)passwordForService:(id)arg1 ;
-(id)initWithBaseQueryAttributes:(id)arg1 ;
-(NSDictionary *)baseQueryAttributes;
-(BOOL)setPassword:(id)arg1 forService:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4 ;
-(id)passwordForService:(id)arg1 error:(id*)arg2 ;
-(BOOL)removePasswordForService:(id)arg1 error:(id*)arg2 ;
-(id)makeQueryWithAttributes:(id)arg1 ;
-(void)addAccessibilityAttributeToQuery:(id)arg1 ;
-(id)errorForPasswordStatus:(int)arg1 ;
@end


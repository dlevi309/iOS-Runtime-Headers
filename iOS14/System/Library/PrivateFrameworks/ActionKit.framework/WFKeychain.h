/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSString;

@interface WFKeychain : NSObject {

	NSString* _service;
	NSString* _accessGroup;

}

@property (nonatomic,readonly) NSString * service;                  //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSString * accessGroup;              //@synthesize accessGroup=_accessGroup - In the implementation block
-(id)dataForKey:(id)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)numberOfItems;
-(id)initWithService:(id)arg1 ;
-(id)items;
-(NSString *)accessGroup;
-(NSString *)service;
-(id)initWithService:(id)arg1 accessGroup:(id)arg2 ;
@end


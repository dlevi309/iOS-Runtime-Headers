/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)items;
-(NSString *)service;
-(unsigned long long)numberOfItems;
-(id)initWithService:(id)arg1 ;
-(NSString *)accessGroup;
-(id)initWithService:(id)arg1 accessGroup:(id)arg2 ;
@end


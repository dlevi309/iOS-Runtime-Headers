/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@class NSArray, NSString;

@interface RMConfigurationSubscriberDescription : NSObject {

	NSArray* _types;
	NSString* _principalClassName;

}

@property (nonatomic,copy,readonly) NSArray * types;                            //@synthesize types=_types - In the implementation block
@property (nonatomic,copy,readonly) NSString * principalClassName;              //@synthesize principalClassName=_principalClassName - In the implementation block
-(NSArray *)types;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)principalClassName;
-(id)initWithTypes:(id)arg1 principalClassName:(id)arg2 ;
@end


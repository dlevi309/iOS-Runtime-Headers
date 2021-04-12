/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@class NSArray, NSString;

@interface RMConfigurationSubscriberDescription : NSObject {

	NSArray* _types;
	NSString* _principalClassName;

}

@property (nonatomic,copy,readonly) NSArray * types;                            //@synthesize types=_types - In the implementation block
@property (nonatomic,copy,readonly) NSString * principalClassName;              //@synthesize principalClassName=_principalClassName - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)types;
-(NSString *)principalClassName;
-(id)initWithTypes:(id)arg1 principalClassName:(id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@class NSArray, NSString;

@interface RMStatusPublisherDescription : NSObject {

	NSArray* _keyPaths;
	NSString* _principalClassName;

}

@property (nonatomic,copy,readonly) NSArray * keyPaths;                         //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,copy,readonly) NSString * principalClassName;              //@synthesize principalClassName=_principalClassName - In the implementation block
-(NSArray *)keyPaths;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithKeyPaths:(id)arg1 principalClassName:(id)arg2 ;
-(NSString *)principalClassName;
@end


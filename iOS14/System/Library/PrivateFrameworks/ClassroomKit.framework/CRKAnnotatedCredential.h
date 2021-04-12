/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKKeychainItem;
@class NSDictionary;

@interface CRKAnnotatedCredential : NSObject {

	id<CRKKeychainItem> _credential;
	NSDictionary* _annotation;

}

@property (nonatomic,readonly) id<CRKKeychainItem> credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * annotation;              //@synthesize annotation=_annotation - In the implementation block
-(NSDictionary *)annotation;
-(id<CRKKeychainItem>)credential;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCredential:(id)arg1 annotation:(id)arg2 ;
@end


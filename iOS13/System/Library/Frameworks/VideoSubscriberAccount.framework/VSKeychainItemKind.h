/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface VSKeychainItemKind : NSObject <NSCopying> {

	NSString* _itemClassName;
	const CFStringRef _secItemClass;
	NSArray* _properties;

}

@property (nonatomic,copy) NSString * itemClassName;                              //@synthesize itemClassName=_itemClassName - In the implementation block
@property (assign,nonatomic) const CFStringRef secItemClass;                      //@synthesize secItemClass=_secItemClass - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attributesByName; 
@property (nonatomic,copy) NSArray * properties;                                  //@synthesize properties=_properties - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)properties;
-(void)setProperties:(NSArray *)arg1 ;
-(NSDictionary *)attributesByName;
-(void)setSecItemClass:(const CFStringRef)arg1 ;
-(void)setItemClassName:(NSString *)arg1 ;
-(NSString *)itemClassName;
-(const CFStringRef)secItemClass;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _category;
	NSDictionary* _actionsByContext;

}

@property (nonatomic,copy) NSString * category;                          //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDictionary * actionsByContext;              //@synthesize actionsByContext=_actionsByContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCategory:(NSString *)arg1 ;
-(id)actions;
-(id)validatedSettings;
-(id)actionsForContext:(unsigned long long)arg1 ;
-(id)initWithCategory:(id)arg1 actionsByContext:(id)arg2 ;
-(unsigned long long)_maximumActionsForContext:(unsigned long long)arg1 ;
-(NSDictionary *)actionsByContext;
-(void)setActionsByContext:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)category;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


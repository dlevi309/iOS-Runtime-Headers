/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)actions;
-(id)initWithCategory:(id)arg1 actionsByContext:(id)arg2 ;
-(id)actionsForContext:(unsigned long long)arg1 ;
-(unsigned long long)_maximumActionsForContext:(unsigned long long)arg1 ;
-(id)validatedSettings;
-(NSDictionary *)actionsByContext;
-(void)setActionsByContext:(NSDictionary *)arg1 ;
@end


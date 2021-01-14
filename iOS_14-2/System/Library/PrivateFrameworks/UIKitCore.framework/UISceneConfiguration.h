/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIStoryboard;

@interface UISceneConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hadResolutionErrorsOnLoad;
	BOOL _isDefault;
	BOOL _fromPlist;
	NSString* _name;
	NSString* _role;
	Class _sceneClass;
	Class _delegateClass;
	UIStoryboard* _storyboard;

}

@property (nonatomic,readonly) BOOL _hadResolutionErrorsOnLoad;              //@synthesize hadResolutionErrorsOnLoad=_hadResolutionErrorsOnLoad - In the implementation block
@property (nonatomic,readonly) BOOL _isDefault;                              //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) BOOL _fromPlist;                              //@synthesize fromPlist=_fromPlist - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * role;                              //@synthesize role=_role - In the implementation block
@property (nonatomic,retain) Class sceneClass; 
@property (nonatomic,retain) Class delegateClass; 
@property (nonatomic,retain) UIStoryboard * storyboard; 
+(BOOL)supportsSecureCoding;
+(id)configurationWithName:(id)arg1 sessionRole:(id)arg2 ;
-(id)_initWithConfiguration:(id)arg1 ;
-(BOOL)_isDefault;
-(id)_initWithLoadErrorForSessionRole:(id)arg1 ;
-(id)init;
-(Class)sceneClass;
-(void)setDelegateClass:(Class)arg1 ;
-(Class)delegateClass;
-(void)setStoryboard:(UIStoryboard *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSceneClass:(Class)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)_fromPlist;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_hadResolutionErrorsOnLoad;
-(UIStoryboard *)storyboard;
-(NSString *)role;
-(id)initWithName:(id)arg1 sessionRole:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)role;
-(id)_initWithConfiguration:(id)arg1 ;
-(Class)delegateClass;
-(Class)sceneClass;
-(BOOL)_fromPlist;
-(BOOL)_isDefault;
-(id)initWithName:(id)arg1 sessionRole:(id)arg2 ;
-(id)_initWithLoadErrorForSessionRole:(id)arg1 ;
-(void)setSceneClass:(Class)arg1 ;
-(void)setDelegateClass:(Class)arg1 ;
-(UIStoryboard *)storyboard;
-(void)setStoryboard:(UIStoryboard *)arg1 ;
-(BOOL)_hadResolutionErrorsOnLoad;
@end


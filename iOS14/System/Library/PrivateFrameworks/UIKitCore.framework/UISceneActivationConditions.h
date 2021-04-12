/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, UIScene;

@interface UISceneActivationConditions : NSObject <NSCopying, NSSecureCoding> {

	NSPredicate* _canActivatePredicate;
	NSPredicate* _prefersPredicate;
	UIScene* _uiScene;

}

@property (assign,setter=_setUIScene:,nonatomic,__weak) UIScene * _UIScene;                                 //@synthesize uiScene=_uiScene - In the implementation block
@property (nonatomic,copy) NSPredicate * canActivateForTargetContentIdentifierPredicate; 
@property (nonatomic,copy) NSPredicate * prefersToActivateForTargetContentIdentifierPredicate; 
+(BOOL)supportsSecureCoding;
-(BOOL)_validateCompileTimeIssues:(id*)arg1 runTimeIssues:(id*)arg2 ;
-(NSPredicate *)prefersToActivateForTargetContentIdentifierPredicate;
-(NSPredicate *)canActivateForTargetContentIdentifierPredicate;
-(id)init;
-(UIScene *)_UIScene;
-(void)_setUIScene:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrefersToActivateForTargetContentIdentifierPredicate:(NSPredicate *)arg1 ;
-(void)setCanActivateForTargetContentIdentifierPredicate:(NSPredicate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)_suitabilityForTargetContentIdentifier:(id)arg1 errorString:(id*)arg2 ;
@end


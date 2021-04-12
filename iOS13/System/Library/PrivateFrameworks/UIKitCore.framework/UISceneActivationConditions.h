/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setUIScene:(id)arg1 ;
-(NSPredicate *)canActivateForTargetContentIdentifierPredicate;
-(NSPredicate *)prefersToActivateForTargetContentIdentifierPredicate;
-(void)setCanActivateForTargetContentIdentifierPredicate:(NSPredicate *)arg1 ;
-(void)setPrefersToActivateForTargetContentIdentifierPredicate:(NSPredicate *)arg1 ;
-(BOOL)_validateCompileTimeIssues:(id*)arg1 runTimeIssues:(id*)arg2 ;
-(long long)_suitabilityForTargetContentIdentifier:(id)arg1 errorString:(id*)arg2 ;
-(UIScene *)_UIScene;
@end


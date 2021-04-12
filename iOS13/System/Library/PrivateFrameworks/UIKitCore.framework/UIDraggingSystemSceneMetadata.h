/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UIDraggingSystemSceneMetadata : NSObject <NSSecureCoding> {

	NSString* _activityType;
	NSString* _sceneIdentifier;

}

@property (nonatomic,copy) NSString * activityType;                 //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSString * sceneIdentifier;              //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)activityType;
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)sceneIdentifier;
-(void)setSceneIdentifier:(NSString *)arg1 ;
@end


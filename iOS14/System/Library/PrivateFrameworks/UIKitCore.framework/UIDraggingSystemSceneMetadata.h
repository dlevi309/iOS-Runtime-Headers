/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)activityType;
-(NSString *)sceneIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


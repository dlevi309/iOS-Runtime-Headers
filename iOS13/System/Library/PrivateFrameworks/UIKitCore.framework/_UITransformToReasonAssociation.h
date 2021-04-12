/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITransform, NSString;

@interface _UITransformToReasonAssociation : NSObject {

	UITransform* _transform;
	NSString* _reason;

}

@property (nonatomic,retain) UITransform * transform;              //@synthesize transform=_transform - In the implementation block
@property (nonatomic,copy) NSString * reason;                      //@synthesize reason=_reason - In the implementation block
+(id)association:(id)arg1 reason:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)reason;
-(UITransform *)transform;
-(void)setTransform:(UITransform *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithTransform:(id)arg1 reason:(id)arg2 ;
@end


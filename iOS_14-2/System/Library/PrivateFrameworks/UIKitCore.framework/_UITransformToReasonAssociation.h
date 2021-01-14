/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTransform:(UITransform *)arg1 ;
-(UITransform *)transform;
-(NSString *)reason;
-(unsigned long long)hash;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithTransform:(id)arg1 reason:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end


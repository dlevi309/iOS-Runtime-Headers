/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSString, AXReplayableGesture, NSUUID;

@interface AXSwitchRecipeMapping : NSObject {

	BOOL _optional;
	NSString* _action;
	NSString* _longPressAction;
	AXReplayableGesture* _gesture;
	AXReplayableGesture* _longPressGesture;
	NSUUID* _switchUUID;
	long long _switchOriginalAction;
	CGPoint _holdPoint;

}

@property (nonatomic,copy) NSString * action;                                     //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * longPressAction;                            //@synthesize longPressAction=_longPressAction - In the implementation block
@property (nonatomic,retain) AXReplayableGesture * gesture;                       //@synthesize gesture=_gesture - In the implementation block
@property (nonatomic,retain) AXReplayableGesture * longPressGesture;              //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (assign,nonatomic) CGPoint holdPoint;                                   //@synthesize holdPoint=_holdPoint - In the implementation block
@property (assign,getter=isOptional,nonatomic) BOOL optional;                     //@synthesize optional=_optional - In the implementation block
@property (nonatomic,copy) NSUUID * switchUUID;                                   //@synthesize switchUUID=_switchUUID - In the implementation block
@property (assign,nonatomic) long long switchOriginalAction;                      //@synthesize switchOriginalAction=_switchOriginalAction - In the implementation block
+(id)recipeMappingWithDictionaryRepresentation:(id)arg1 ;
-(id)init;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)action;
-(BOOL)isOptional;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)longPressAction;
-(void)setGesture:(AXReplayableGesture *)arg1 ;
-(AXReplayableGesture *)longPressGesture;
-(void)setLongPressGesture:(AXReplayableGesture *)arg1 ;
-(void)setOptional:(BOOL)arg1 ;
-(void)setLongPressAction:(NSString *)arg1 ;
-(void)setHoldPoint:(CGPoint)arg1 ;
-(void)setSwitchUUID:(NSUUID *)arg1 ;
-(void)setSwitchOriginalAction:(long long)arg1 ;
-(AXReplayableGesture *)gesture;
-(CGPoint)holdPoint;
-(NSUUID *)switchUUID;
-(long long)switchOriginalAction;
@end


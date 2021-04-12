/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

@class UIColor, NSString;


@protocol CKMessageAcknowledgment <NSObject>
@property (nonatomic,readonly) long long messageAcknowledgmentType; 
@property (nonatomic,readonly) UIColor * acknowledgmentImageColor; 
@property (nonatomic,readonly) NSString * acknowledgmentImageName; 
@property (nonatomic,readonly) UIColor * selectedAcknowledgmentImageColor; 
@property (nonatomic,readonly) UIColor * selectedBalloonColor; 
@required
-(UIColor *)selectedAcknowledgmentImageColor;
-(UIColor *)acknowledgmentImageColor;
-(long long)messageAcknowledgmentType;
-(NSString *)acknowledgmentImageName;
-(UIColor *)selectedBalloonColor;

@end


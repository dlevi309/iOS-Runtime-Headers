/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKMessageAcknowledgment.h>

@class UIColor, NSString;

@interface CKMessageAcknowledgmentDraftDescriptor : NSObject <CKMessageAcknowledgment> {

	long long _messageAcknowledgmentType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long messageAcknowledgmentType;                     //@synthesize messageAcknowledgmentType=_messageAcknowledgmentType - In the implementation block
@property (nonatomic,readonly) UIColor * acknowledgmentImageColor; 
@property (nonatomic,readonly) NSString * acknowledgmentImageName; 
@property (nonatomic,readonly) UIColor * selectedAcknowledgmentImageColor; 
@property (nonatomic,readonly) UIColor * selectedBalloonColor; 
+(id)acknowledgmentBarColor;
+(id)allMessageAcknowledgmentDescriptors;
-(UIColor *)selectedAcknowledgmentImageColor;
-(UIColor *)acknowledgmentImageColor;
-(long long)messageAcknowledgmentType;
-(long long)themeColor;
-(id)initWithMessageAcknowledgmentType:(long long)arg1 ;
-(NSString *)acknowledgmentImageName;
-(UIColor *)selectedBalloonColor;
@end


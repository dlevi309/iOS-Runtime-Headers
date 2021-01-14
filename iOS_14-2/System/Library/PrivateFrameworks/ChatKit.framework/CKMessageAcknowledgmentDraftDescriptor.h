/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKMessageAcknowledgment.h>

@class UIColor, NSString;

@interface CKMessageAcknowledgmentDraftDescriptor : NSObject <CKMessageAcknowledgment> {

	long long _messageAcknowledgmentType;

}

@property (nonatomic,readonly) long long messageAcknowledgmentType;                     //@synthesize messageAcknowledgmentType=_messageAcknowledgmentType - In the implementation block
@property (nonatomic,readonly) UIColor * acknowledgmentImageColor; 
@property (nonatomic,readonly) NSString * acknowledgmentImageName; 
@property (nonatomic,readonly) UIColor * selectedAcknowledgmentImageColor; 
@property (nonatomic,readonly) UIColor * selectedBalloonColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acknowledgmentBarColor;
+(id)allMessageAcknowledgmentDescriptors;
-(long long)themeColor;
-(id)initWithMessageAcknowledgmentType:(long long)arg1 ;
-(NSString *)acknowledgmentImageName;
-(UIColor *)selectedBalloonColor;
-(UIColor *)selectedAcknowledgmentImageColor;
-(UIColor *)acknowledgmentImageColor;
-(long long)messageAcknowledgmentType;
@end


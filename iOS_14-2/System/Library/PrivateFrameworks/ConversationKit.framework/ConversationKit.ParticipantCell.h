/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _TtC15ConversationKit15ParticipantView, NSString;

@interface ConversationKit.ParticipantCell : UICollectionViewCell {

	 participantView;
	 accessibilityDisplayName;

}

@property (readonly,nonatomic) _TtC15ConversationKit15ParticipantView * participantView; 
@property (copy,nonatomic) NSString * accessibilityDisplayName; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(id)initWithCoder:(id)arg1 ;
-(_TtC15ConversationKit15ParticipantView *)participantView;
-(NSString *)accessibilityDisplayName;
-(void)setAccessibilityDisplayName:(NSString *)arg1 ;
@end


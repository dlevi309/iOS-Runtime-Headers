/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _TtC15ConversationKit15ParticipantView, NSString;

@interface ConversationKit.ParticipantCell : UICollectionViewCell {

	??? participantIdentifier;
	 participantView;
	 accessibilityDisplayName;

}

@property (readonly,nonatomic) _TtC15ConversationKit15ParticipantView * participantView; 
@property (copy,nonatomic) NSString * accessibilityDisplayName; 
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(_TtC15ConversationKit15ParticipantView *)participantView;
-(NSString *)accessibilityDisplayName;
-(void)setAccessibilityDisplayName:(NSString *)arg1 ;
@end


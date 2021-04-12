/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSMutableDictionary;

@interface AVTAvatarAttributeEditorState : NSObject {

	NSMutableDictionary* _pairedStates;

}

@property (nonatomic,retain) NSMutableDictionary * pairedStates;              //@synthesize pairedStates=_pairedStates - In the implementation block
+(id)buildStateFromCoreModel:(id)arg1 avatarConfiguration:(id)arg2 ;
-(id)init;
-(BOOL)isCategoryPaired:(long long)arg1 ;
-(void)setCategory:(long long)arg1 inPairedState:(BOOL)arg2 ;
-(id)initWithPairedStates:(id)arg1 ;
-(NSMutableDictionary *)pairedStates;
-(void)setPairedStates:(NSMutableDictionary *)arg1 ;
@end


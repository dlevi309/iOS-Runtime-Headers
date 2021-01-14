/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSMutableDictionary;

@interface AVTAvatarAttributeEditorState : NSObject {

	NSMutableDictionary* _pairedStates;

}

@property (nonatomic,retain) NSMutableDictionary * pairedStates;              //@synthesize pairedStates=_pairedStates - In the implementation block
+(id)buildStateFromCoreModel:(id)arg1 avatarConfiguration:(id)arg2 ;
-(BOOL)isCategoryPaired:(long long)arg1 ;
-(id)init;
-(void)setCategory:(long long)arg1 inPairedState:(BOOL)arg2 ;
-(id)initWithPairedStates:(id)arg1 ;
-(NSMutableDictionary *)pairedStates;
-(void)setPairedStates:(NSMutableDictionary *)arg1 ;
@end


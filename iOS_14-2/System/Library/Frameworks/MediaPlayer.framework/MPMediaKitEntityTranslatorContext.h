/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPMediaKitEntityRelationshipPayloadProvider;
@class NSString;

@interface MPMediaKitEntityTranslatorContext : NSObject {

	NSString* _personID;
	id<MPMediaKitEntityRelationshipPayloadProvider> _relationshipPayloadProvider;

}

@property (nonatomic,copy) NSString * personID;                                                                        //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) id<MPMediaKitEntityRelationshipPayloadProvider> relationshipPayloadProvider;              //@synthesize relationshipPayloadProvider=_relationshipPayloadProvider - In the implementation block
-(NSString *)personID;
-(id<MPMediaKitEntityRelationshipPayloadProvider>)relationshipPayloadProvider;
-(void)setRelationshipPayloadProvider:(id<MPMediaKitEntityRelationshipPayloadProvider>)arg1 ;
-(void)setPersonID:(NSString *)arg1 ;
@end


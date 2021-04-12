/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPMediaRemoteEntityTranslator;

@interface _MPMediaRemoteEntityRelationshipTranslator : NSObject {

	Class _relationshipModelClass;

}

@property (assign,nonatomic) Class relationshipModelClass;                                    //@synthesize relationshipModelClass=_relationshipModelClass - In the implementation block
@property (nonatomic,readonly) MPMediaRemoteEntityTranslator * entityTranslator; 
-(MPMediaRemoteEntityTranslator *)entityTranslator;
-(Class)relationshipModelClass;
-(void)setRelationshipModelClass:(Class)arg1 ;
@end


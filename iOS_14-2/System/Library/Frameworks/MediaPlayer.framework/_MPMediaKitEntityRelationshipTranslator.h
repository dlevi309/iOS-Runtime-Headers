/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/_MPKeyPathEntityRelationshipTranslator.h>

@class NSString;

@interface _MPMediaKitEntityRelationshipTranslator : _MPKeyPathEntityRelationshipTranslator {

	NSString* _mediaKitType;
	/*^block*/id _payloadTransformBlock;

}

@property (nonatomic,copy) NSString * mediaKitType;                   //@synthesize mediaKitType=_mediaKitType - In the implementation block
@property (nonatomic,readonly) id payloadTransformBlock;              //@synthesize payloadTransformBlock=_payloadTransformBlock - In the implementation block
-(id)prepareSource:(id)arg1 context:(id)arg2 ;
-(NSString *)mediaKitType;
-(void)setMediaKitType:(NSString *)arg1 ;
-(id)initWithRelatedMPModelClass:(Class)arg1 mediaKitType:(id)arg2 payloadTransformBlock:(/*^block*/id)arg3 ;
-(id)payloadTransformBlock;
@end


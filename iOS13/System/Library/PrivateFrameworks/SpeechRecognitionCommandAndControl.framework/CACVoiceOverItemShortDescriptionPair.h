/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@protocol CACVoiceOverDescribable;
@class NSString;

@interface CACVoiceOverItemShortDescriptionPair : NSObject {

	id<CACVoiceOverDescribable> _item;
	NSString* _shortDescription;

}

@property (nonatomic,retain) id<CACVoiceOverDescribable> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSString * shortDescription;                   //@synthesize shortDescription=_shortDescription - In the implementation block
-(id<CACVoiceOverDescribable>)item;
-(void)setItem:(id<CACVoiceOverDescribable>)arg1 ;
-(NSString *)shortDescription;
-(void)setShortDescription:(NSString *)arg1 ;
@end


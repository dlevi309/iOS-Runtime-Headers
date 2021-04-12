/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)shortDescription;
-(void)setShortDescription:(NSString *)arg1 ;
-(void)setItem:(id<CACVoiceOverDescribable>)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/


@class NSArray, NSString;

@interface VOSOutputEventCategory : NSObject {

	NSArray* _outputEvents;
	NSString* _localizedCategoryName;

}

@property (nonatomic,retain) NSArray * outputEvents;                        //@synthesize outputEvents=_outputEvents - In the implementation block
@property (nonatomic,retain) NSString * localizedCategoryName;              //@synthesize localizedCategoryName=_localizedCategoryName - In the implementation block
+(id)interaction;
+(id)system;
+(id)allCategories;
+(id)voiceOverFeedback;
+(id)appFeedback;
+(id)braille;
+(id)textEditing;
-(id)init;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(id)initWithOutputEvents:(id)arg1 localizedCategoryName:(id)arg2 ;
-(void)setOutputEvents:(NSArray *)arg1 ;
-(NSArray *)outputEvents;
-(BOOL)containsOutputEvent:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
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
+(id)braille;
+(id)allCategories;
+(id)voiceOverFeedback;
+(id)appFeedback;
+(id)textEditing;
-(id)init;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(id)initWithOutputEvents:(id)arg1 localizedCategoryName:(id)arg2 ;
-(void)setOutputEvents:(NSArray *)arg1 ;
-(NSArray *)outputEvents;
-(BOOL)containsOutputEvent:(id)arg1 ;
@end


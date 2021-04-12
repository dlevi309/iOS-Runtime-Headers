/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UINotificationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	BOOL _includePrivateEvents;
	NSDictionary* _feedbacks;

}

@property (assign,nonatomic) BOOL includePrivateEvents;              //@synthesize includePrivateEvents=_includePrivateEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * feedbacks;               //@synthesize feedbacks=_feedbacks - In the implementation block
+(id)defaultConfiguration;
+(id)privateConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)feedbackKeyPaths;
-(NSDictionary *)feedbacks;
-(BOOL)includePrivateEvents;
-(void)setFeedbacks:(NSDictionary *)arg1 ;
-(void)setIncludePrivateEvents:(BOOL)arg1 ;
-(BOOL)defaultEnabled;
@end


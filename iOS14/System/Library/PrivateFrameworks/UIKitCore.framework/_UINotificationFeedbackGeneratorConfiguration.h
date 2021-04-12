/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)privateConfigurationForTypes:(id)arg1 ;
-(id)feedbackKeyPaths;
-(void)setFeedbacks:(NSDictionary *)arg1 ;
-(NSDictionary *)feedbacks;
-(BOOL)defaultEnabled;
-(void)setIncludePrivateEvents:(BOOL)arg1 ;
-(BOOL)includePrivateEvents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


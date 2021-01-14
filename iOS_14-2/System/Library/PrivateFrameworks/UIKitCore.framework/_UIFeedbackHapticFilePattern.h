/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedback.h>
#import <UIKitCore/_UIFeedbackFilePlayable_Internal.h>
#import <UIKitCore/_UIFeedbackDiscretePlayable.h>

@class NSURL, NSString;

@interface _UIFeedbackHapticFilePattern : _UIFeedback <_UIFeedbackFilePlayable_Internal, _UIFeedbackDiscretePlayable> {

	BOOL _highPriority;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                                      //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isHighPriority,nonatomic,readonly) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)type;
+(id)feedbackPatternFromFile:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_effectivePlayableFeedbackTypes;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isHighPriority;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIContentViewEditingState : NSObject <NSCopying> {

	NSString* _text;
	NSString* _proposedReplacementText;
	NSRange _proposedReplacementRange;

}

@property (nonatomic,readonly) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * proposedReplacementText;              //@synthesize proposedReplacementText=_proposedReplacementText - In the implementation block
@property (nonatomic,readonly) NSRange proposedReplacementRange;                //@synthesize proposedReplacementRange=_proposedReplacementRange - In the implementation block
-(id)initWithText:(id)arg1 ;
-(id)initWithText:(id)arg1 proposedReplacementText:(id)arg2 proposedReplacementRange:(NSRange)arg3 ;
-(NSString *)proposedReplacementText;
-(NSRange)proposedReplacementRange;
-(NSString *)text;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


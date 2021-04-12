/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface VCSleepWorkflow : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _actions;
	NSString* _name;
	NSString* _summaryString;

}

@property (nonatomic,copy,readonly) NSArray * actions;                                  //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifierForDisplay; 
@property (nonatomic,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryString;                           //@synthesize summaryString=_summaryString - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)actions;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithActions:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)summaryString;
-(NSString *)bundleIdentifierForDisplay;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSArray;

@interface WFShortcutSuggestionsDescriptor : WFDatabaseObjectDescriptor {

	NSArray* _suggestions;
	unsigned long long _availability;

}

@property (nonatomic,readonly) NSArray * suggestions;                        //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,readonly) unsigned long long availability;              //@synthesize availability=_availability - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)suggestions;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)availability;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 suggestions:(id)arg2 availability:(unsigned long long)arg3 ;
@end


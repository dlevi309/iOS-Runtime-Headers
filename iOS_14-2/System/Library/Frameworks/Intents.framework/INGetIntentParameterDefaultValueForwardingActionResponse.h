/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentForwardingActionResponse.h>

@class NSData;

@interface INGetIntentParameterDefaultValueForwardingActionResponse : INIntentForwardingActionResponse {

	NSData* _archivedDefaultValue;

}

@property (nonatomic,readonly) NSData * archivedDefaultValue;              //@synthesize archivedDefaultValue=_archivedDefaultValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithArchivedDefaultValue:(id)arg1 error:(id)arg2 ;
-(NSData *)archivedDefaultValue;
@end


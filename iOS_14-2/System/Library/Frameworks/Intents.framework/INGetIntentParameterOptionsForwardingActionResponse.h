/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentForwardingActionResponse.h>

@class NSData;

@interface INGetIntentParameterOptionsForwardingActionResponse : INIntentForwardingActionResponse {

	NSData* _archivedObjectCollection;

}

@property (nonatomic,readonly) NSData * archivedObjectCollection;              //@synthesize archivedObjectCollection=_archivedObjectCollection - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)archivedObjectCollection;
-(id)initWithArchivedObjectCollection:(id)arg1 error:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end


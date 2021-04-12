/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/


@interface IMAssistantMessageAttributeOptions : NSObject {

	unsigned long long _attributes;

}

@property (nonatomic,readonly) BOOL includeRead; 
@property (nonatomic,readonly) BOOL includeUnread; 
@property (nonatomic,readonly) unsigned long long attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)optionsWithAttributes:(unsigned long long)arg1 ;
+(id)optionsWithAttributes:(unsigned long long)arg1 sanitizer:(id)arg2 ;
-(unsigned long long)attributes;
-(id)initWithAttributes:(unsigned long long)arg1 ;
-(id)initWithAttributes:(unsigned long long)arg1 sanitizer:(id)arg2 ;
-(BOOL)includeRead;
-(BOOL)includeUnread;
@end


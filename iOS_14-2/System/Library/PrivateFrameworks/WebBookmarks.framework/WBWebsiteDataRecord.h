/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@class NSString;

@interface WBWebsiteDataRecord : NSObject {

	NSString* _domain;
	unsigned long long _usage;

}

@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> XPCDictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSString * domain;                                                 //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) unsigned long long usage;                                                 //@synthesize usage=_usage - In the implementation block
+(id)websiteDataRecordWithDomain:(id)arg1 ;
+(id)websiteDataRecordFromXPCDictionary:(id)arg1 ;
-(unsigned long long)usage;
-(NSString *)domain;
-(id)_initWithDomain:(id)arg1 ;
-(id)_initWithDomain:(id)arg1 usage:(unsigned long long)arg2 ;
-(NSObject*<OS_xpc_object>)XPCDictionaryRepresentation;
-(void)setUsage:(unsigned long long)arg1 ;
@end


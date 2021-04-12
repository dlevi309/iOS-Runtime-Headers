/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)domain;
-(void)setUsage:(unsigned long long)arg1 ;
-(unsigned long long)usage;
-(id)_initWithDomain:(id)arg1 ;
-(id)_initWithDomain:(id)arg1 usage:(unsigned long long)arg2 ;
-(NSObject*<OS_xpc_object>)XPCDictionaryRepresentation;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSUUID, NSURL, NSString;

@interface WBSBrowserTabCompletionInfo : NSObject {

	NSUUID* _uuid;
	NSUUID* _windowUUID;
	unsigned long long _tabIndex;
	NSURL* _url;
	NSString* _title;

}

@property (nonatomic,readonly) NSUUID * uuid;                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * windowUUID;                      //@synthesize windowUUID=_windowUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long tabIndex;              //@synthesize tabIndex=_tabIndex - In the implementation block
@property (nonatomic,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
-(NSURL *)url;
-(NSUUID *)uuid;
-(NSString *)title;
-(unsigned long long)tabIndex;
-(NSUUID *)windowUUID;
-(id)initWithUUID:(id)arg1 windowUUID:(id)arg2 tabIndex:(unsigned long long)arg3 url:(id)arg4 title:(id)arg5 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/


@class NSURL, NSString;

@interface CDBAttachmentInfo : NSObject {

	NSURL* _legacyURL;
	NSURL* _url;
	NSString* _localRelativePath;

}

@property (nonatomic,copy,readonly) NSURL * legacyURL;                         //@synthesize legacyURL=_legacyURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * localRelativePath;              //@synthesize localRelativePath=_localRelativePath - In the implementation block
-(NSURL *)url;
-(id)initWithLegacyURL:(id)arg1 url:(id)arg2 localRelativePath:(id)arg3 ;
-(NSString *)localRelativePath;
-(NSURL *)legacyURL;
@end


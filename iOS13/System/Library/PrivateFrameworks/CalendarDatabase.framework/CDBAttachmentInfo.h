/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)localRelativePath;
-(id)initWithLegacyURL:(id)arg1 url:(id)arg2 localRelativePath:(id)arg3 ;
-(NSURL *)legacyURL;
@end


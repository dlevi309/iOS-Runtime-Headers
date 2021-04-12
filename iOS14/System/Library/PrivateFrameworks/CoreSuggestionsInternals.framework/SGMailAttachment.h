/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSString;

@interface SGMailAttachment : NSObject {

	BOOL _isDownloadedLocally;
	NSString* _type;
	NSString* _filename;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * filename;                   //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL isDownloadedLocally;              //@synthesize isDownloadedLocally=_isDownloadedLocally - In the implementation block
@property (nonatomic,readonly) BOOL isCalendarMimeType; 
+(id)attachmentWithType:(id)arg1 filename:(id)arg2 path:(id)arg3 ;
+(id)attachmentsFromSearchableItem:(id)arg1 ;
-(NSString *)filename;
-(NSString *)path;
-(id)description;
-(NSString *)type;
-(id)initWithType:(id)arg1 filename:(id)arg2 path:(id)arg3 ;
-(BOOL)isCalendarMimeType;
-(BOOL)isDownloadedLocally;
@end


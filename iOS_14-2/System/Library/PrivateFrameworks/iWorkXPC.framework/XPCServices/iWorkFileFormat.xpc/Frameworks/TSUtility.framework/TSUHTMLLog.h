/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@class NSString, NSFileHandle;

@interface TSUHTMLLog : NSObject {

	NSString* _path;
	NSString* _title;
	NSString* _stylesheet;
	NSString* _script;
	NSFileHandle* _handle;
	BOOL _logStarted;
	unsigned long long _uniquifier;
	unsigned long long _tableRow;

}

@property (nonatomic,readonly) NSString * path;                //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * stylesheet;              //@synthesize stylesheet=_stylesheet - In the implementation block
@property (nonatomic,copy) NSString * script;                  //@synthesize script=_script - In the implementation block
-(void)clear;
-(NSString *)script;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)path;
-(void)setScript:(NSString *)arg1 ;
-(void)logEnd;
-(NSString *)title;
-(void)dealloc;
-(NSString *)stylesheet;
-(void)setStylesheet:(NSString *)arg1 ;
-(void)logBegin;
-(void)_writeMarkupData:(id)arg1 ;
-(void)writeMarkup:(id)arg1 ;
-(id)uniqueIdentifierWithPrefix:(id)arg1 ;
-(void)writeText:(id)arg1 ;
-(void)openInBrowser;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
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
-(void)dealloc;
-(void)clear;
-(void)close;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)script;
-(void)setScript:(NSString *)arg1 ;
-(NSString *)stylesheet;
-(void)setStylesheet:(NSString *)arg1 ;
-(void)logBegin;
-(void)_writeMarkupData:(id)arg1 ;
-(void)writeMarkup:(id)arg1 ;
-(id)uniqueIdentifierWithPrefix:(id)arg1 ;
-(void)writeText:(id)arg1 ;
-(void)logEnd;
-(void)openInBrowser;
@end


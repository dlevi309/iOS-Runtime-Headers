/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVLeafItem.h>

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem {

	NSURL* _baseURL;
	int _writeStyle;

}

@property (nonatomic,retain) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) int writeStyle;               //@synthesize writeStyle=_writeStyle - In the implementation block
-(id)init;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)baseURL;
-(void)write:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)payloadAsFullURL;
-(id)payloadAsOriginalURL;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(int)writeStyle;
-(void)setWriteStyle:(int)arg1 ;
@end


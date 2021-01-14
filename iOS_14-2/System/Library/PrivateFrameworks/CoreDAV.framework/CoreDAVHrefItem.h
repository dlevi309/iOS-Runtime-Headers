/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)baseURL;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)write:(id)arg1 ;
-(id)description;
-(id)payloadAsOriginalURL;
-(id)payloadAsFullURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 baseURL:(id)arg2 ;
-(int)writeStyle;
-(void)setWriteStyle:(int)arg1 ;
@end


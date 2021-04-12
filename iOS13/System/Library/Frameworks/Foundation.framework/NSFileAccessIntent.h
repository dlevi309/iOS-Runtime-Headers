/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSURL;

@interface NSFileAccessIntent : NSObject {

	NSURL* _url;
	BOOL _isRead;
	long long _options;

}

@property (copy) NSURL * URL;                                        //@synthesize url=_url - In the implementation block
@property (readonly) BOOL isRead;                                    //@synthesize isRead=_isRead - In the implementation block
@property (readonly) unsigned long long readingOptions; 
@property (readonly) unsigned long long writingOptions; 
+(id)readingIntentWithURL:(id)arg1 options:(unsigned long long)arg2 ;
+(id)writingIntentWithURL:(id)arg1 options:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(BOOL)isRead;
-(unsigned long long)readingOptions;
-(unsigned long long)writingOptions;
@end


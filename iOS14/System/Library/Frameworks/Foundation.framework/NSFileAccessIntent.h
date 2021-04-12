/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)writingOptions;
-(unsigned long long)readingOptions;
-(void)setURL:(NSURL *)arg1 ;
-(id)description;
-(NSURL *)URL;
-(BOOL)isRead;
-(void)dealloc;
@end


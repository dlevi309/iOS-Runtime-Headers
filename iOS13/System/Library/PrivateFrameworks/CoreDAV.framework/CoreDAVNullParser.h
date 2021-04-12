/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class NSError, NSString;

@interface CoreDAVNullParser : NSObject <CoreDAVResponseBodyParser> {

	NSError* _parserError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSError * parserError; 
+(BOOL)canHandleContentType:(id)arg1 ;
-(NSError *)parserError;
-(BOOL)processData:(id)arg1 forTask:(id)arg2 ;
@end


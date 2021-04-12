/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem {

	NSString* _symbolicColorName;

}

@property (nonatomic,retain) NSString * symbolicColorName;              //@synthesize symbolicColorName=_symbolicColorName - In the implementation block
@property (nonatomic,retain) NSString * colorString; 
-(id)init;
-(void)write:(id)arg1 ;
-(NSString *)symbolicColorName;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(NSString *)colorString;
-(void)setColorString:(NSString *)arg1 ;
-(void)parserFoundAttributes:(id)arg1 ;
@end


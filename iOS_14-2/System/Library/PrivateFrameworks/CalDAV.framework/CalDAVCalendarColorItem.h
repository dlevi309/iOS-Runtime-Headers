/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem {

	NSString* _symbolicColorName;

}

@property (nonatomic,retain) NSString * symbolicColorName;              //@synthesize symbolicColorName=_symbolicColorName - In the implementation block
@property (nonatomic,retain) NSString * colorString; 
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(id)init;
-(void)write:(id)arg1 ;
-(NSString *)colorString;
-(void)setColorString:(NSString *)arg1 ;
-(NSString *)symbolicColorName;
-(void)parserFoundAttributes:(id)arg1 ;
@end


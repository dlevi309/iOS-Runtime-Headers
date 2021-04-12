/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItemWithNoChildren.h>

@class NSString;

@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren {

	NSString* _nameAttribute;
	NSString* _typeAttribute;

}

@property (nonatomic,retain) NSString * nameAttribute;              //@synthesize nameAttribute=_nameAttribute - In the implementation block
@property (nonatomic,retain) NSString * typeAttribute;              //@synthesize typeAttribute=_typeAttribute - In the implementation block
-(NSString *)nameAttribute;
-(NSString *)typeAttribute;
-(void)setNameAttribute:(NSString *)arg1 ;
-(void)parserFoundAttributes:(id)arg1 ;
-(void)setTypeAttribute:(NSString *)arg1 ;
@end


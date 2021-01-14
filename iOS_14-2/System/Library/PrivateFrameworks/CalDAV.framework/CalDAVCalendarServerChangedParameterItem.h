/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)typeAttribute;
-(NSString *)nameAttribute;
-(void)parserFoundAttributes:(id)arg1 ;
-(void)setNameAttribute:(NSString *)arg1 ;
-(void)setTypeAttribute:(NSString *)arg1 ;
@end


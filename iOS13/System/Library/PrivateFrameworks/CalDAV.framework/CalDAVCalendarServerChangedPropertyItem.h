/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSString;

@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem {

	NSMutableSet* _changedParameters;
	NSString* _nameAttribute;
	NSString* _typeAttribute;

}

@property (nonatomic,retain) NSString * nameAttribute;                      //@synthesize nameAttribute=_nameAttribute - In the implementation block
@property (nonatomic,retain) NSString * typeAttribute;                      //@synthesize typeAttribute=_typeAttribute - In the implementation block
@property (nonatomic,retain) NSMutableSet * changedParameters;              //@synthesize changedParameters=_changedParameters - In the implementation block
-(NSString *)nameAttribute;
-(NSMutableSet *)changedParameters;
-(NSString *)typeAttribute;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setNameAttribute:(NSString *)arg1 ;
-(void)parserFoundAttributes:(id)arg1 ;
-(id)copyParseRules;
-(void)setTypeAttribute:(NSString *)arg1 ;
-(void)addChangedParameter:(id)arg1 ;
-(void)setChangedParameters:(NSMutableSet *)arg1 ;
@end


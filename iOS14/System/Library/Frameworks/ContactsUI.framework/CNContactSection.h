/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNContactSection : NSObject <NSCopying> {

	NSString* _title;
	NSString* _identifier;
	NSString* _sortKey;
	NSRange _range;

}

@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) NSRange range;                      //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSString * sortKey;                 //@synthesize sortKey=_sortKey - In the implementation block
-(void)setSortKey:(NSString *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(NSString *)sortKey;
-(NSRange)range;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end


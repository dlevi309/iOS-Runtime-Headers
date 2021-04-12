/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(NSString *)sortKey;
-(void)setSortKey:(NSString *)arg1 ;
@end


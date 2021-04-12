/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate;

@interface CNContactFilter : NSObject <NSCopying> {

	BOOL _rankSortedResults;
	NSString* _fullTextString;

}

@property (nonatomic,copy) NSString * fullTextString;                //@synthesize fullTextString=_fullTextString - In the implementation block
@property (nonatomic,readonly) BOOL supportsSections; 
@property (nonatomic,readonly) NSPredicate * predicate; 
@property (assign,nonatomic) BOOL rankSortedResults;                 //@synthesize rankSortedResults=_rankSortedResults - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSPredicate *)predicate;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)supportsSections;
-(NSString *)fullTextString;
-(void)setFullTextString:(NSString *)arg1 ;
-(BOOL)rankSortedResults;
-(void)setRankSortedResults:(BOOL)arg1 ;
@end


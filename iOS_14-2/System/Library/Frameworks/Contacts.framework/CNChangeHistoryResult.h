/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNChangeHistoryAnchor, NSArray;

@interface CNChangeHistoryResult : NSObject <NSSecureCoding> {

	BOOL _changesTruncated;
	BOOL _unifyResults;
	CNChangeHistoryAnchor* _latestChangeAnchor;
	NSArray* _contactChanges;
	NSArray* _groupChanges;
	NSArray* _labeledValueChanges;

}

@property (assign,nonatomic) BOOL changesTruncated;                                   //@synthesize changesTruncated=_changesTruncated - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * latestChangeAnchor;              //@synthesize latestChangeAnchor=_latestChangeAnchor - In the implementation block
@property (nonatomic,retain) NSArray * contactChanges;                                //@synthesize contactChanges=_contactChanges - In the implementation block
@property (nonatomic,retain) NSArray * groupChanges;                                  //@synthesize groupChanges=_groupChanges - In the implementation block
@property (nonatomic,retain) NSArray * labeledValueChanges;                           //@synthesize labeledValueChanges=_labeledValueChanges - In the implementation block
@property (assign,nonatomic) BOOL unifyResults;                                       //@synthesize unifyResults=_unifyResults - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGroupChanges:(NSArray *)arg1 ;
-(void)setLabeledValueChanges:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)groupChanges;
-(void)setLatestChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(CNChangeHistoryAnchor *)latestChangeAnchor;
-(void)setChangesTruncated:(BOOL)arg1 ;
-(NSArray *)labeledValueChanges;
-(id)description;
-(void)setUnifyResults:(BOOL)arg1 ;
-(NSArray *)contactChanges;
-(BOOL)changesTruncated;
-(BOOL)enumerateGroupChangesFromContactStore:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)contactChangesEnumeratorWithKeysToFetch:(id)arg1 contactStore:(id)arg2 ;
-(id)labeledValueChangesEnumeratorWithContactStore:(id)arg1 ;
-(id)groupChangesEnumeratorWithContactStore:(id)arg1 ;
-(BOOL)unifyResults;
-(BOOL)enumerateContactChangesWithKeysToFetch:(id)arg1 fromContactStore:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setContactChanges:(NSArray *)arg1 ;
@end


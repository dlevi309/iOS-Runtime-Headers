/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNChangeHistoryAnchor, NSArray;

@interface CNChangeHistoryClearRequest : NSObject <NSSecureCoding> {

	NSString* _clientIdentifier;
	CNChangeHistoryAnchor* _toChangeAnchor;
	NSArray* _contactChangeIDs;
	NSArray* _groupChangeIDs;
	NSString* _containerIdentifier;

}

@property (nonatomic,retain) NSArray * contactChangeIDs;                          //@synthesize contactChangeIDs=_contactChangeIDs - In the implementation block
@property (nonatomic,retain) NSArray * groupChangeIDs;                            //@synthesize groupChangeIDs=_groupChangeIDs - In the implementation block
@property (nonatomic,retain) NSString * containerIdentifier;                      //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                       //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * toChangeAnchor;              //@synthesize toChangeAnchor=_toChangeAnchor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)setToChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(CNChangeHistoryAnchor *)toChangeAnchor;
-(NSArray *)contactChangeIDs;
-(NSArray *)groupChangeIDs;
-(void)setContactChangeIDs:(NSArray *)arg1 ;
-(void)setGroupChangeIDs:(NSArray *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(id)description;
-(void)setToChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNChangeHistoryAnchor *)toChangeAnchor;
-(NSArray *)contactChangeIDs;
-(NSArray *)groupChangeIDs;
-(void)setContactChangeIDs:(NSArray *)arg1 ;
-(void)setGroupChangeIDs:(NSArray *)arg1 ;
-(NSString *)clientIdentifier;
@end


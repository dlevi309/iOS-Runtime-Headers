/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface CNSaveResponse : NSObject <NSSecureCoding> {

	NSMutableDictionary* _contactSnapshotsByIndexPath;
	NSMutableDictionary* _groupSnapshotsByIndexPath;
	NSMutableDictionary* _containerSnapshotsByIndexPath;
	BOOL _didAffectMeCard;

}

@property (readonly) BOOL didAffectMeCard; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)applySnapshotsToSaveRequest:(id)arg1 ;
-(BOOL)didAffectMeCard;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


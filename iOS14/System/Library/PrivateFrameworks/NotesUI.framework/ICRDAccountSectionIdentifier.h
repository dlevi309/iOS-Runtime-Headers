/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/ICRDSectionIdentifier.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSManagedObjectID;

@interface ICRDAccountSectionIdentifier : NSObject <ICRDSectionIdentifier, NSCopying> {

	NSManagedObjectID* _accountObjectID;
	long long _sectionType;
	NSString* _title;

}

@property (nonatomic,retain) NSManagedObjectID * accountObjectID;              //@synthesize accountObjectID=_accountObjectID - In the implementation block
@property (assign,nonatomic) long long sectionType;                            //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * expansionStateContext; 
+(id)sortDescriptors;
-(id)initWithObject:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(long long)sectionType;
-(NSManagedObjectID *)accountObjectID;
-(unsigned long long)hash;
-(void)setSectionType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(long long)accountSectionTypeForModernAccount:(id)arg1 ;
-(long long)accountSectionTypeForLegacyAccount:(id)arg1 ;
-(BOOL)isEqualToICRDAccountSectionIdentifier:(id)arg1 ;
-(void)setAccountObjectID:(NSManagedObjectID *)arg1 ;
-(NSString *)expansionStateContext;
-(id)initWithSectionType:(long long)arg1 accountObjectID:(id)arg2 ;
@end


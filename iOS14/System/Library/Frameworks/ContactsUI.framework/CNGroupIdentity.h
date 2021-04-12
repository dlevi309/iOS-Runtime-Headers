/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSArray;

@interface CNGroupIdentity : NSObject <NSCopying> {

	NSString* _groupName;
	NSData* _groupPhoto;
	NSArray* _contacts;
	NSString* _identifier;

}

@property (nonatomic,retain) NSData * groupPhoto;                       //@synthesize groupPhoto=_groupPhoto - In the implementation block
@property (nonatomic,retain) NSString * groupName;                      //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                        //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) long long numberOfContacts; 
@property (nonatomic,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)numberOfContacts;
-(void)updateContacts:(id)arg1 ;
-(NSData *)groupPhoto;
-(id)initGroupWithName:(id)arg1 photo:(id)arg2 contacts:(id)arg3 ;
-(void)updateGroupPhoto:(id)arg1 ;
-(id)initGroupWithName:(id)arg1 photo:(id)arg2 contacts:(id)arg3 identifier:(id)arg4 ;
-(void)setGroupPhoto:(NSData *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateGroupName:(id)arg1 ;
@end


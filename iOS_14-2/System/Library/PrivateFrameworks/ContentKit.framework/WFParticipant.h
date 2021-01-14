/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSURL, NSString, NSPredicate;

@interface WFParticipant : NSObject <WFNaming, WFSerializableContent> {

	BOOL _managed;
	BOOL _currentUser;
	NSURL* _URL;
	NSString* _name;
	NSString* _emailAddress;
	long long _status;
	long long _role;
	long long _type;
	NSString* _sourceIdentifier;
	NSPredicate* _contactPredicate;

}

@property (nonatomic,readonly) NSURL * URL;                                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * emailAddress;                       //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) long long status;                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) long long role;                                     //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                   //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (getter=isManaged,nonatomic,readonly) BOOL managed;                      //@synthesize managed=_managed - In the implementation block
@property (getter=isCurrentUser,nonatomic,readonly) BOOL currentUser;              //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) NSPredicate * contactPredicate;                     //@synthesize contactPredicate=_contactPredicate - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
-(BOOL)isManaged;
-(BOOL)isCurrentUser;
-(NSString *)emailAddress;
-(NSString *)name;
-(NSString *)wfName;
-(id)initWithEKParticipant:(id)arg1 ;
-(long long)type;
-(NSURL *)URL;
-(long long)role;
-(NSPredicate *)contactPredicate;
-(long long)status;
-(NSString *)sourceIdentifier;
-(id)wfSerializedRepresentation;
-(id)initWithURL:(id)arg1 name:(id)arg2 emailAddress:(id)arg3 status:(long long)arg4 role:(long long)arg5 type:(long long)arg6 sourceIdentifier:(id)arg7 isManaged:(BOOL)arg8 isCurrentUser:(BOOL)arg9 contactPredicate:(id)arg10 ;
@end


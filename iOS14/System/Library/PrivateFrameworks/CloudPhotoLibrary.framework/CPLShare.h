/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSArray, CPLShareParticipant;

@interface CPLShare : NSObject <NSSecureCoding, NSCopying> {

	long long _publicPermission;
	NSURL* _URL;
	NSArray* _participants;

}

@property (assign,nonatomic) long long publicPermission;                                  //@synthesize publicPermission=_publicPermission - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSArray * participants;                                        //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) CPLShareParticipant * owner; 
@property (nonatomic,readonly) CPLShareParticipant * currentUserParticipant; 
@property (nonatomic,readonly) BOOL ownerIsCurrentUser; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)init;
-(CPLShareParticipant *)owner;
-(CPLShareParticipant *)currentUserParticipant;
-(long long)publicPermission;
-(void)setPublicPermission:(long long)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSArray *)participants;
-(id)description;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)ownerIsCurrentUser;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, NSData;

@interface EDAMContact : FATObject {

	NSString* _name;
	NSString* _id;
	NSNumber* _type;
	NSString* _photoUrl;
	NSNumber* _photoLastUpdated;
	NSData* _messagingPermit;
	NSNumber* _messagingPermitExpires;

}

@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * id;                                  //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSNumber * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * photoUrl;                            //@synthesize photoUrl=_photoUrl - In the implementation block
@property (nonatomic,retain) NSNumber * photoLastUpdated;                    //@synthesize photoLastUpdated=_photoLastUpdated - In the implementation block
@property (nonatomic,retain) NSData * messagingPermit;                       //@synthesize messagingPermit=_messagingPermit - In the implementation block
@property (nonatomic,retain) NSNumber * messagingPermitExpires;              //@synthesize messagingPermitExpires=_messagingPermitExpires - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)name;
-(NSNumber *)type;
-(void)setType:(NSNumber *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
-(NSString *)photoUrl;
-(void)setPhotoUrl:(NSString *)arg1 ;
-(NSNumber *)photoLastUpdated;
-(void)setPhotoLastUpdated:(NSNumber *)arg1 ;
-(NSData *)messagingPermit;
-(void)setMessagingPermit:(NSData *)arg1 ;
-(NSNumber *)messagingPermitExpires;
-(void)setMessagingPermitExpires:(NSNumber *)arg1 ;
@end


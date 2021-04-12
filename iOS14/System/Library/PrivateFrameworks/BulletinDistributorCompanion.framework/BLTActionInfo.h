/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSDictionary;

@interface BLTActionInfo : NSObject <BSDescriptionProviding> {

	long long _actionType;
	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;
	NSDictionary* _context;

}

@property (assign,nonatomic) long long actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * publisherBulletinID;              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,copy) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy) NSString * sectionID;                        //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSDictionary * context;                    //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSectionID:(NSString *)arg1 ;
-(id)succinctDescription;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(NSString *)sectionID;
-(void)setRecordID:(NSString *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSDictionary *)context;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)recordID;
-(NSString *)publisherBulletinID;
-(void)setContext:(NSDictionary *)arg1 ;
-(id)initWithActionType:(long long)arg1 publisherBulletinID:(id)arg2 recordID:(id)arg3 sectionID:(id)arg4 context:(id)arg5 ;
@end


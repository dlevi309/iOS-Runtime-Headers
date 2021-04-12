/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSString *)recordID;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(long long)actionType;
-(void)setActionType:(long long)arg1 ;
-(NSString *)publisherBulletinID;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(id)initWithActionType:(long long)arg1 publisherBulletinID:(id)arg2 recordID:(id)arg3 sectionID:(id)arg4 context:(id)arg5 ;
@end


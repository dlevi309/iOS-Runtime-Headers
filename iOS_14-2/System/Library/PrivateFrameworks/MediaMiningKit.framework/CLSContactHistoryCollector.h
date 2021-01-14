/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class NSMutableArray, NSData, NSString;

@interface CLSContactHistoryCollector : NSObject <CNChangeHistoryEventVisitor> {

	BOOL _didDropEverything;
	NSMutableArray* _insertedContactIdentifiers;
	NSMutableArray* _updatedContactIdentifiers;
	NSMutableArray* _deletedContactIdentifiers;
	NSData* _contactHistoryToken;

}

@property (assign) BOOL didDropEverything;                                             //@synthesize didDropEverything=_didDropEverything - In the implementation block
@property (nonatomic,retain) NSMutableArray * insertedContactIdentifiers;              //@synthesize insertedContactIdentifiers=_insertedContactIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * updatedContactIdentifiers;               //@synthesize updatedContactIdentifiers=_updatedContactIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedContactIdentifiers;               //@synthesize deletedContactIdentifiers=_deletedContactIdentifiers - In the implementation block
@property (nonatomic,retain) NSData * contactHistoryToken;                             //@synthesize contactHistoryToken=_contactHistoryToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableArray *)insertedContactIdentifiers;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)visitDropEverythingEvent:(id)arg1 ;
-(NSMutableArray *)deletedContactIdentifiers;
-(void)setDeletedContactIdentifiers:(NSMutableArray *)arg1 ;
-(void)setContactHistoryToken:(NSData *)arg1 ;
-(BOOL)didDropEverything;
-(void)setDidDropEverything:(BOOL)arg1 ;
-(void)setInsertedContactIdentifiers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)updatedContactIdentifiers;
-(void)setUpdatedContactIdentifiers:(NSMutableArray *)arg1 ;
-(NSData *)contactHistoryToken;
@end


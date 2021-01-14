/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

@class NSNumber, NSDate;


@protocol WBSParsecABGroupStore <NSObject>
@property (assign,nonatomic,__weak) id<WBSParsecABGroupStoreClient> client; 
@property (nonatomic,retain) NSNumber * groupIdentifier; 
@property (nonatomic,retain) NSDate * generationDate; 
@required
-(void)setGroupIdentifier:(id)arg1;
-(id<WBSParsecABGroupStoreClient>)client;
-(NSNumber *)groupIdentifier;
-(void)setClient:(id)arg1;
-(NSDate *)generationDate;
-(void)setGenerationDate:(id)arg1;

@end


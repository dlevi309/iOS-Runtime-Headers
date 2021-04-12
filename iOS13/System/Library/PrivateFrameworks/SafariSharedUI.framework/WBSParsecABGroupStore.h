/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

@class NSNumber, NSDate;


@protocol WBSParsecABGroupStore <NSObject>
@property (assign,nonatomic,__weak) id<WBSParsecABGroupStoreClient> client; 
@property (nonatomic,retain) NSNumber * groupIdentifier; 
@property (nonatomic,retain) NSDate * generationDate; 
@required
-(NSNumber *)groupIdentifier;
-(void)setGroupIdentifier:(id)arg1;
-(id<WBSParsecABGroupStoreClient>)client;
-(void)setClient:(id)arg1;
-(NSDate *)generationDate;
-(void)setGenerationDate:(id)arg1;

@end


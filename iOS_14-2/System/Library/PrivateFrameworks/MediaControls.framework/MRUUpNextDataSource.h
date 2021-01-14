/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@protocol MRUUpNextDataSourceDelegate;
@class MPCPlayerResponse, NSArray, NSDictionary;

@interface MRUUpNextDataSource : NSObject {

	MPCPlayerResponse* _response;
	id<MRUUpNextDataSourceDelegate> _delegate;
	NSArray* _responseItemIDs;
	NSDictionary* _responseItemsByIdentifier;

}

@property (nonatomic,retain) NSDictionary * responseItemsByIdentifier;                     //@synthesize responseItemsByIdentifier=_responseItemsByIdentifier - In the implementation block
@property (nonatomic,retain) MPCPlayerResponse * response;                                 //@synthesize response=_response - In the implementation block
@property (assign,nonatomic,__weak) id<MRUUpNextDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * responseItemIDs;                                  //@synthesize responseItemIDs=_responseItemIDs - In the implementation block
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(id<MRUUpNextDataSourceDelegate>)delegate;
-(void)setDelegate:(id<MRUUpNextDataSourceDelegate>)arg1 ;
-(MPCPlayerResponse *)response;
-(void)setResponse:(MPCPlayerResponse *)arg1 ;
-(void)playItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeResponseItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)moveReponseItemToNextWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)moveReponseItemWithIdentifier:(id)arg1 afterResponseItemWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)responseItemIDs;
-(void)updateContentItems;
-(id)responseItemForIdentifier:(id)arg1 ;
-(BOOL)canMoveResponseItemWithIdentifier:(id)arg1 ;
-(NSDictionary *)responseItemsByIdentifier;
-(void)setResponseItemsByIdentifier:(NSDictionary *)arg1 ;
@end


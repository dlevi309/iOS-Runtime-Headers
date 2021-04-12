/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/


@protocol EMContentItem;
@class NSString, NSProgress, EFPromise, EFLocked, EFFuture;

@interface MessageContentItemRepresentationTask : NSObject {

	long long _networkUsage;
	id<EMContentItem> _contentItem;
	NSString* _type;
	NSProgress* _topLevelProgress;
	EFPromise* _contentRequestPromise;
	NSProgress* _contentRequestProgress;
	EFLocked* _invokerIDs;

}

@property (nonatomic,retain) id<EMContentItem> contentItem;                    //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,retain) NSString * type;                                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long networkUsage;                           //@synthesize networkUsage=_networkUsage - In the implementation block
@property (nonatomic,retain) NSProgress * topLevelProgress;                    //@synthesize topLevelProgress=_topLevelProgress - In the implementation block
@property (nonatomic,retain) EFPromise * contentRequestPromise;                //@synthesize contentRequestPromise=_contentRequestPromise - In the implementation block
@property (nonatomic,retain) NSProgress * contentRequestProgress;              //@synthesize contentRequestProgress=_contentRequestProgress - In the implementation block
@property (nonatomic,retain) EFLocked * invokerIDs;                            //@synthesize invokerIDs=_invokerIDs - In the implementation block
@property (nonatomic,readonly) EFFuture * future; 
@property (nonatomic,readonly) NSProgress * progress; 
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)resume;
-(NSProgress *)progress;
-(EFFuture *)future;
-(id<EMContentItem>)contentItem;
-(long long)networkUsage;
-(void)setNetworkUsage:(long long)arg1 ;
-(void)setContentItem:(id<EMContentItem>)arg1 ;
-(NSProgress *)topLevelProgress;
-(EFPromise *)contentRequestPromise;
-(EFLocked *)invokerIDs;
-(NSProgress *)contentRequestProgress;
-(void)setContentRequestProgress:(NSProgress *)arg1 ;
-(id)initWithContentItem:(id)arg1 type:(id)arg2 networkUsage:(long long)arg3 ;
-(void)addAccessedByInvokerWithID:(id)arg1 ;
-(BOOL)hasBeenAccessedByInvokerWithID:(id)arg1 ;
-(void)setTopLevelProgress:(NSProgress *)arg1 ;
-(void)setContentRequestPromise:(EFPromise *)arg1 ;
-(void)setInvokerIDs:(EFLocked *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHSuggestionMessageContext;

@interface PXCMMSuggestionsDataSourceContext : NSObject {

	unsigned char _type;
	BOOL _shouldShowAccepted;
	PHSuggestionMessageContext* _messageContext;
	unsigned long long _matchingStrategy;
	long long _fetchLimit;

}

@property (nonatomic,readonly) unsigned char type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PHSuggestionMessageContext * messageContext;              //@synthesize messageContext=_messageContext - In the implementation block
@property (assign,nonatomic) unsigned long long matchingStrategy;                      //@synthesize matchingStrategy=_matchingStrategy - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAccepted;                                  //@synthesize shouldShowAccepted=_shouldShowAccepted - In the implementation block
@property (assign,nonatomic) long long fetchLimit;                                     //@synthesize fetchLimit=_fetchLimit - In the implementation block
-(id)initWithType:(unsigned char)arg1 ;
-(long long)fetchLimit;
-(id)description;
-(void)setFetchLimit:(long long)arg1 ;
-(unsigned char)type;
-(PHSuggestionMessageContext *)messageContext;
-(void)setMessageContext:(PHSuggestionMessageContext *)arg1 ;
-(BOOL)supportsMatching;
-(unsigned long long)matchingStrategy;
-(void)setMatchingStrategy:(unsigned long long)arg1 ;
-(BOOL)shouldShowAccepted;
-(void)setShouldShowAccepted:(BOOL)arg1 ;
@end


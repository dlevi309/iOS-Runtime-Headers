/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class NSString, NSArray;


@protocol EMContentRequestOptionsBuilder
@property (assign,nonatomic) NSString * requestedRepresentation; 
@property (assign,nonatomic) long long networkUsage; 
@property (assign,nonatomic) BOOL includeSuggestionItems; 
@property (assign,nonatomic) BOOL requestAllHeaders; 
@property (nonatomic,copy) NSArray * requestedHeaderKeys; 
@required
-(NSString *)requestedRepresentation;
-(long long)networkUsage;
-(BOOL)includeSuggestionItems;
-(NSArray *)requestedHeaderKeys;
-(BOOL)requestAllHeaders;
-(void)setNetworkUsage:(long long)arg1;
-(void)setRequestedRepresentation:(id)arg1;
-(void)setIncludeSuggestionItems:(BOOL)arg1;
-(void)setRequestAllHeaders:(BOOL)arg1;
-(void)setRequestedHeaderKeys:(id)arg1;

@end


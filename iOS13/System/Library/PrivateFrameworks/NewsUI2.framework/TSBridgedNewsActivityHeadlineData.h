/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@class NSString, TSArticleContext;

@interface TSBridgedNewsActivityHeadlineData : NSObject {

	 articleID;
	 articleContext;
	 articlePresentationStyle;
	 showShareSheet;
	 forceArticleUpdate;
	 headline;

}

@property (readonly,nonatomic) NSString * articleID; 
@property (readonly,nonatomic) TSArticleContext * articleContext; 
@property (readonly,nonatomic) long long articlePresentationStyle; 
@property (readonly,nonatomic) BOOL showShareSheet; 
@property (readonly,nonatomic) BOOL forceArticleUpdate; 
@property (readonly,nonatomic) id<FCHeadlineProviding> headline; 
-(id)init;
-(id<FCHeadlineProviding>)headline;
-(BOOL)showShareSheet;
-(NSString *)articleID;
-(long long)presentationReason;
-(TSArticleContext *)articleContext;
-(long long)articlePresentationStyle;
-(BOOL)forceArticleUpdate;
@end


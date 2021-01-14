/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <libobjc.A.dylib/PMEditProviderProtocol.h>

@protocol PMEditProviderDelegate;
@class VEKProduction, NSString;

@interface PMTitleEditorProvider : NSObject <PMEditProviderProtocol> {

	VEKProduction* _production;
	id<PMEditProviderDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subTitle; 
@property (nonatomic,retain) VEKProduction * production;                              //@synthesize production=_production - In the implementation block
@property (assign,nonatomic,__weak) id<PMEditProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PMEditProviderDelegate>)delegate;
-(NSString *)subTitle;
-(void)setDelegate:(id<PMEditProviderDelegate>)arg1 ;
-(VEKProduction *)production;
-(void)updateTitle:(id)arg1 ;
-(NSString *)title;
-(void)setProduction:(VEKProduction *)arg1 ;
-(id)initWithProduction:(id)arg1 ;
-(void)updateSubtitle:(id)arg1 ;
-(id)defaultMemoriesTitleHelper;
@end


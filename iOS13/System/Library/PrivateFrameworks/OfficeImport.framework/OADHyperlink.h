/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSURL, NSString;

@interface OADHyperlink : NSObject {

	NSURL* mTargetLocation;
	int mTargetMode;
	NSString* mTargetFrame;
	NSString* mAction;
	NSString* mTooltip;
	NSString* mInvalidUrl;
	BOOL mDoEndSound;
	BOOL mIsVisited;
	BOOL mDoAddToHistory;

}

@property (assign,nonatomic) BOOL doEndSound; 
@property (assign,nonatomic) BOOL isVisited; 
@property (assign,nonatomic) BOOL doAddToHistory; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)action;
-(void)setAction:(id)arg1 ;
-(id)targetFrame;
-(void)setTargetFrame:(id)arg1 ;
-(id)targetLocation;
-(int)targetMode;
-(id)tooltip;
-(void)setTargetLocation:(id)arg1 ;
-(void)setTargetMode:(int)arg1 ;
-(void)setTooltip:(id)arg1 ;
-(id)invalidUrl;
-(void)setInvalidUrl:(id)arg1 ;
-(BOOL)doEndSound;
-(void)setDoEndSound:(BOOL)arg1 ;
-(BOOL)isVisited;
-(void)setIsVisited:(BOOL)arg1 ;
-(BOOL)doAddToHistory;
-(void)setDoAddToHistory:(BOOL)arg1 ;
@end


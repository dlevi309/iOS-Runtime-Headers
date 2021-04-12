/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)action;
-(void)setAction:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setTargetFrame:(id)arg1 ;
-(id)tooltip;
-(id)targetFrame;
-(BOOL)isEqual:(id)arg1 ;
-(id)targetLocation;
-(int)targetMode;
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


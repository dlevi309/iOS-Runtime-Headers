/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSData;

@interface VRFPublicKey : GPBMessage

@property (assign) BOOL needsRefresh; 
@property (nonatomic,copy) NSData * vrfKey; 
@property (assign,nonatomic) int type; 
+(id)descriptor;
-(BOOL)needsRefresh;
-(void)setNeedsRefresh:(BOOL)arg1 ;
@end


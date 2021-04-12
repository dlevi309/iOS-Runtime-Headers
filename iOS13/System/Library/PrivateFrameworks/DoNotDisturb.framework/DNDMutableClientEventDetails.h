/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDClientEventDetails.h>

@class NSString, DNDClientEventSource;

@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) DNDClientEventSource * source; 
@property (assign,nonatomic) BOOL shouldAlwaysInterrupt; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(DNDClientEventSource *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setShouldAlwaysInterrupt:(BOOL)arg1 ;
@end


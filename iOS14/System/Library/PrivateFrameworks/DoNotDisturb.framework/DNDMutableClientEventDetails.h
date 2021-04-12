/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDClientEventDetails.h>

@class NSString, DNDClientEventSource;

@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) DNDClientEventSource * source; 
@property (assign,nonatomic) BOOL shouldAlwaysInterrupt; 
-(void)setSource:(DNDClientEventSource *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldAlwaysInterrupt:(BOOL)arg1 ;
@end


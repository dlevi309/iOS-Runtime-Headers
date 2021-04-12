/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRApplicationActivity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MRMutableApplicationActivity : MRApplicationActivity <NSSecureCoding>

@property (nonatomic,copy) NSString * primaryApplicationDisplayID; 
@property (nonatomic,copy) NSString * secondaryApplicationDisplayID; 
@property (assign,nonatomic) int status; 
+(BOOL)supportsSecureCoding;
-(void)setPrimaryApplicationDisplayID:(NSString *)arg1 ;
-(void)setSecondaryApplicationDisplayID:(NSString *)arg1 ;
-(void)setStatus:(int)arg1 ;
@end


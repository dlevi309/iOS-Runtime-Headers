/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSDictionary;

@interface CAMCaptureCommand : NSObject <NSCopying, NSCoding> {

	NSString* _reason;
	NSArray* _subcommands;

}

@property (nonatomic,copy) NSArray * subcommands;                                           //@synthesize subcommands=_subcommands - In the implementation block
@property (nonatomic,copy) NSString * reason;                                               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL requiresSessionModification; 
@property (nonatomic,copy,readonly) NSString * sessionModificationLogReason; 
@property (nonatomic,readonly) double sessionModificationMinimumExecutionTime; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
-(void)executeWithContext:(id)arg1 ;
-(NSDictionary *)userInfo;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)requiresSessionModification;
-(NSString *)reason;
-(id)initWithSubcommands:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sessionModificationLogReason;
-(void)setReason:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)sessionModificationMinimumExecutionTime;
-(void)addSubcommand:(id)arg1 ;
-(NSArray *)subcommands;
-(void)setSubcommands:(NSArray *)arg1 ;
-(void)removeSubcommand:(id)arg1 ;
@end


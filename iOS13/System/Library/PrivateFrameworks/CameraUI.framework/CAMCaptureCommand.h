/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,copy) NSArray * subcommands;                                         //@synthesize subcommands=_subcommands - In the implementation block
@property (nonatomic,copy) NSString * reason;                                             //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL requiresSessionModification; 
@property (nonatomic,copy,readonly) NSString * sessionModificationLogReason; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithSubcommands:(id)arg1 ;
-(void)addSubcommand:(id)arg1 ;
-(BOOL)requiresSessionModification;
-(NSString *)sessionModificationLogReason;
-(NSArray *)subcommands;
-(void)setSubcommands:(NSArray *)arg1 ;
-(void)removeSubcommand:(id)arg1 ;
@end


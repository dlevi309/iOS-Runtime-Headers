/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface CADisplayPreferences : NSObject <NSCopying, NSMutableCopying> {

	CADisplayPreferencesPriv* _priv;

}

@property (assign,nonatomic) BOOL matchContent; 
@property (nonatomic,copy) NSString * preferredHdrMode; 
@property (nonatomic,readonly) int _preferredHdrType; 
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)matchContent;
-(NSString *)preferredHdrMode;
-(int)_preferredHdrType;
-(id)initWithMatchContent:(BOOL)arg1 preferredHdrType:(int)arg2 ;
-(id)initWithPreferences:(id)arg1 ;
-(void)setMatchContent:(BOOL)arg1 ;
-(void)setPreferredHdrMode:(NSString *)arg1 ;
@end


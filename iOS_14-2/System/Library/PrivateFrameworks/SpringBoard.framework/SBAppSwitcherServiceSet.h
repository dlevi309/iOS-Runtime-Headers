/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SBAppSwitcherServiceSet : NSObject <NSCopying> {

	NSMutableArray* _services;

}

@property (nonatomic,readonly) NSMutableArray * services;              //@synthesize services=_services - In the implementation block
-(void)removeService:(id)arg1 ;
-(void)addService:(id)arg1 ;
-(NSMutableArray *)services;
-(unsigned long long)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)appLayouts;
-(id)serviceBundleIdentifiers;
-(id)serviceAtIndex:(unsigned long long)arg1 ;
-(id)initWithServices:(id)arg1 zone:(NSZone*)arg2 ;
-(id)serviceForBundleIdentifier:(id)arg1 ;
@end


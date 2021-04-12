/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SBAppSwitcherServiceSet : NSObject <NSCopying> {

	NSMutableArray* _services;

}

@property (nonatomic,readonly) NSMutableArray * services;              //@synthesize services=_services - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(NSMutableArray *)services;
-(void)addService:(id)arg1 ;
-(void)removeService:(id)arg1 ;
-(id)appLayouts;
-(id)serviceBundleIdentifiers;
-(id)serviceAtIndex:(unsigned long long)arg1 ;
-(id)initWithServices:(id)arg1 zone:(NSZone*)arg2 ;
-(id)serviceForBundleIdentifier:(id)arg1 ;
@end


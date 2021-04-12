/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/CADAccountAccessHandler.h>

@class NSMutableArray;

@interface CADGroupedAccountAccessHandler : NSObject <CADAccountAccessHandler> {

	NSMutableArray* _accessHandlers;

}

@property (nonatomic,readonly) NSMutableArray * accessHandlers;              //@synthesize accessHandlers=_accessHandlers - In the implementation block
-(id)init;
-(void)reset;
-(BOOL)isAccountManaged:(id)arg1 ;
-(BOOL)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2 ;
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
-(NSMutableArray *)accessHandlers;
-(void)addAccountAccessHandler:(id)arg1 ;
@end


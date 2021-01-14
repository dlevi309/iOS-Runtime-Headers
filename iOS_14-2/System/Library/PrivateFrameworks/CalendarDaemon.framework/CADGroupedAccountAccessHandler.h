/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/CADAccountAccessHandler.h>

@class NSMutableArray;

@interface CADGroupedAccountAccessHandler : NSObject <CADAccountAccessHandler> {

	NSMutableArray* _accessHandlers;

}

@property (nonatomic,readonly) NSMutableArray * accessHandlers;              //@synthesize accessHandlers=_accessHandlers - In the implementation block
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
-(BOOL)isAccountManaged:(id)arg1 ;
-(BOOL)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2 ;
-(NSMutableArray *)accessHandlers;
-(id)init;
-(void)addAccountAccessHandler:(id)arg1 ;
-(void)reset;
@end


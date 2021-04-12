/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSSet, NSString;

@interface IMParentalControlsService : NSObject {

	BOOL _disableService;
	BOOL _forceWhiteList;
	NSSet* _whitelist;
	NSString* _name;

}

@property (assign) BOOL disableService;              //@synthesize disableService=_disableService - In the implementation block
@property (assign) BOOL forceWhiteList;              //@synthesize forceWhiteList=_forceWhiteList - In the implementation block
@property (retain) NSSet * whitelist;                //@synthesize whitelist=_whitelist - In the implementation block
@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
-(NSSet *)whitelist;
-(void)setForceWhiteList:(BOOL)arg1 ;
-(BOOL)disableService;
-(void)setWhitelist:(NSSet *)arg1 ;
-(BOOL)forceWhiteList;
-(NSString *)name;
-(void)setDisableService:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
@end


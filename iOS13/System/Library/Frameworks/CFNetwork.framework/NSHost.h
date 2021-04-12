/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSArray, __NSHostExtraIvars, NSString;

@interface NSHost : NSObject {

	NSArray* names;
	NSArray* addresses;
	id reserved;

}

@property (nonatomic,retain) __NSHostExtraIvars * reserved; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * names; 
@property (copy,readonly) NSString * address; 
@property (copy,readonly) NSArray * addresses; 
@property (copy,readonly) NSString * localizedName; 
+(id)currentHost;
+(id)hostWithName:(id)arg1 ;
+(id)hostWithAddress:(id)arg1 ;
+(BOOL)isHostCacheEnabled;
+(void)setHostCacheEnabled:(BOOL)arg1 ;
+(void)flushHostCache;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(__NSHostExtraIvars *)reserved;
-(NSString *)localizedName;
-(NSString *)address;
-(id)_thingToResolve;
-(NSArray *)names;
-(NSArray *)addresses;
-(id)initToResolve:(id)arg1 as:(int)arg2 ;
-(void)resolve:(/*^block*/id)arg1 ;
-(void)blockingResolveUntil:(int)arg1 ;
-(void)__resolveWithFlags:(int)arg1 resultArray:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)resolveCurrentHostWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqualToHost:(id)arg1 ;
-(void)setReserved:(__NSHostExtraIvars *)arg1 ;
@end


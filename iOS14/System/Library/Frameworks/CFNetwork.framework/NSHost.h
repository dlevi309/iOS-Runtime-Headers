/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSArray, NSString;

@interface NSHost : NSObject {

	NSArray* names;
	NSArray* addresses;
	id reserved;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * names; 
@property (copy,readonly) NSString * address; 
@property (copy,readonly) NSArray * addresses; 
@property (copy,readonly) NSString * localizedName; 
+(id)currentHost;
+(id)hostWithName:(id)arg1 ;
+(void)flushHostCache;
+(id)hostWithAddress:(id)arg1 ;
+(BOOL)isHostCacheEnabled;
+(void)setHostCacheEnabled:(BOOL)arg1 ;
-(NSArray *)addresses;
-(NSString *)localizedName;
-(BOOL)isEqualToHost:(id)arg1 ;
-(id)_thingToResolve;
-(NSString *)name;
-(id)description;
-(NSString *)address;
-(NSArray *)names;
-(void)dealloc;
@end


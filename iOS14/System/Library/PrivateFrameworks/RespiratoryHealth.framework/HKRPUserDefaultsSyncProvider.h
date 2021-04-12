/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/

#import <libobjc.A.dylib/HKRPUserDefaultsSyncProviding.h>

@class NPSManager, NSString;

@interface HKRPUserDefaultsSyncProvider : NSObject <HKRPUserDefaultsSyncProviding> {

	NPSManager* _manager;
	NSString* _userDefaultsDomain;

}

@property (nonatomic,copy,readonly) NSString * userDefaultsDomain;              //@synthesize userDefaultsDomain=_userDefaultsDomain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)userDefaultsDomain;
-(id)initWithUserDefaultsDomain:(id)arg1 ;
-(void)synchronizeKeys:(id)arg1 ;
@end


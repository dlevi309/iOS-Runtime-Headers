/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKAppUserDefaultsStoring.h>

@class NSString;

@interface IKAppUserDefaults : NSObject <IKAppUserDefaultsStoring>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUserDefaults;
-(id)dataForKey:(id)arg1 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(void)removeDataForKey:(id)arg1 ;
@end


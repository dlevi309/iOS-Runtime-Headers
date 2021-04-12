/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString;

@interface SAHACurrentHome : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * currentHomeIdentifier; 
@property (nonatomic,copy) NSString * currentHomeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentHomeWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)currentHome;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)currentHomeName;
-(void)setCurrentHomeName:(NSString *)arg1 ;
-(void)setCurrentHomeIdentifier:(NSString *)arg1 ;
-(NSString *)currentHomeIdentifier;
@end


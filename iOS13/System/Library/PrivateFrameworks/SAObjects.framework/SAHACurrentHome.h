/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)currentHome;
+(id)currentHomeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)currentHomeIdentifier;
-(void)setCurrentHomeIdentifier:(NSString *)arg1 ;
-(NSString *)currentHomeName;
-(void)setCurrentHomeName:(NSString *)arg1 ;
@end


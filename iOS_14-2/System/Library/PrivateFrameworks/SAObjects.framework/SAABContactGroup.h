/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SASource;

@interface SAABContactGroup : SADomainObject

@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,retain) SASource * groupSource; 
+(id)contactGroup;
+(id)contactGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(SASource *)groupSource;
-(void)setGroupSource:(SASource *)arg1 ;
@end


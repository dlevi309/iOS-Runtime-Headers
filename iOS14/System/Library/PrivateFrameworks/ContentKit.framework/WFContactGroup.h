/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/WFNaming.h>

@class NSString, NSArray;

@interface WFContactGroup : NSObject <WFNaming>

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(Class)preferredConcreteSubclass;
+(id)allContactGroups;
+(id)contactGroupWithName:(id)arg1 ;
-(NSArray *)contacts;
-(NSString *)name;
-(NSString *)wfName;
-(BOOL)containsContact:(id)arg1 ;
@end


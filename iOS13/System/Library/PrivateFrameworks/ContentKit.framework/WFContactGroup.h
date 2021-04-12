/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSArray *)contacts;
-(BOOL)containsContact:(id)arg1 ;
-(NSString *)wfName;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAMacFilesystemContext : SADomainObject

@property (nonatomic,copy) NSArray * targetEntities; 
+(id)filesystemContext;
+(id)filesystemContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)targetEntities;
-(void)setTargetEntities:(NSArray *)arg1 ;
@end

